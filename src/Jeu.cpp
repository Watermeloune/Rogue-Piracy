#include "Jeu.h"
Jeu::Jeu()
{

}

Jeu::~Jeu()
{

}

void Jeu::effacerEcran()
{
    #ifdef _WIN32
      win.clear();
    #else
      std::cout << "\x1B[2J\x1B[H";
    #endif
}

void Jeu::afficheInfoBat(Bateau bat)
{
    std::cout << bat.getNom() << '\n';
    std::cout << "vie du bateau : ";
    for (int i = 0; i < bat.getPV(); i++) {
        std::cout << '|';
    }
    std::cout << '\n' << bat.getPV() << "/" << bat.getMaxPv();
    std::cout << '\n' << "taille equipage : " << bat.getEquipage()->getTabEquipage()->size() << '\n';
    for (unsigned int i = 0; i <bat.getListeArme()->size() ; i++) {
        std::cout << "charge cannon "<< i << " : "<< fmod(temps,bat[i].getTempsRecharge()*100) << '/' << bat[i].getTempsRecharge()*100 << '\n';
    }
    std::cout << "================================" << '\n';
}

void Jeu::boucle()
{
    init();
    enCombat=true;
    effacerEcran();
    afficheInfoBat(joueur);
    afficheInfoBat(ennemi);

    while (1)
    {
        if(enCombat)
        {
            combat();
            afficheInfoBat(joueur);
            afficheInfoBat(ennemi);
        }
        else
            break;


            effacerEcran();


        temps++;
        usleep(10000);
    }

}

void Jeu::init()
{
    debut=true;
    temps=0;

    Bateau bat(10,10,10,10,"l'Espadon");
    Arme arme1(3,1,3,10,3);
    Arme arme2(5,1,5,10,5);
    bat.ajouterArme(arme1);
    bat.ajouterArme(arme2);
    Matelot mat1(5,5,"Jeans-Louis");
    Matelot mat2(5,5,"Juan-Pedro");
    bat.getEquipage()->ajoutMatelot(mat1);
    bat.getEquipage()->ajoutMatelot(mat2);

    Bateau bot(1);
    ennemi=bot;

    joueur=bat;

    debut=false;
}

void Jeu::combat()
{
    if(joueur.getPV()!=0 && ennemi.getPV()!=0)
    {
        for (unsigned int i = 0; i < joueur.getListeArme()->size(); i++) {
            if(joueur[i].estPretATirer(temps))
            {
                joueur.tirer(joueur[i], ennemi);
            }
        }
        for (unsigned int i = 0; i < ennemi.getListeArme()->size(); i++) {
            if(ennemi[i].estPretATirer(temps))
            {
                ennemi.tirer(ennemi[i], joueur);
            }
        }
    }
    else
        enCombat=false;
}
