#include "Jeu.h"
Jeu::Jeu()
{

}

Jeu::~Jeu()
{

}

void Jeu::boucle()
{
    init();
    enCombat=true;
    AffichageTxt affichage;


    while (1)
    {
        if(enCombat)
            {
                combat();
                affichage.infoBat(joueur, temps);
                affichage.infoBat(ennemi, temps);
            }
        if(joueur.getPV()==0)
        {
            std::cout << "game over" << '\n';
            break;
        }
        if(ennemi.getPV()==0)
        {
            niveau++;
            recompence();
            Bateau tmp(niveau);
            ennemi=tmp;
            enCombat=true;
        }

        temps++;
        affichage.effacerEcran();
        usleep(1*10000);
    }

}

void Jeu::init()
{
    debut=true;
    temps=0;
    niveau=1;
    int choix=0;
    Arme arme1(1);
    Arme arme2(1);
    Arme arme3(1);
    std::string nom;
    AffichageTxt affichage;
    affichage.debut(nom, choix,arme1,arme2, arme3);

    Bateau bat(25,25,25,25,nom);
    if(choix==1)
        bat.ajouterArme(arme1);
    if(choix==2)
        bat.ajouterArme(arme2);
    if(choix==3)
        bat.ajouterArme(arme3);


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

void Jeu::recompence()
{
    AffichageTxt affichage;
    joueur.reparer(5);
    int choix=0;
    if(joueur.getListeArme()->size()>5)
    {
        affichage.choixArme(choix, ennemi.getListeArme());
        joueur.ajouterArme(ennemi[choix-1]);
    }

}
