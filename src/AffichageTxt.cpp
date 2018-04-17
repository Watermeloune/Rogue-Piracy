#include "AffichageTxt.h"

AffichageTxt::AffichageTxt()
{

}
AffichageTxt::~AffichageTxt()
{

}

void AffichageTxt::debut(std::string & nom, int & choix, Arme arme1, Arme arme2, Arme arme3)
{
    effacerEcran();
    std::cout << "Bienvenu dans Rogue-Piracy" << '\n'
        << "Veuillez d'abord entrer le nom de votre bateau : ";
    std::cin >> nom;

    std::cout << "Bienvenu à bord du " << nom << '\n'
        <<"Veuillez choisir une arme (entrer le numero)" << '\n';
    std::cout << "========== Numero 1 ==========" << '\n';
    infoArme(arme1);
    std::cout << "========== Numero 2 ==========" << '\n';
    infoArme(arme2);
    std::cout << "========== Numero 3 ==========" << '\n';
    infoArme(arme3);
    do {
        std::cin >> choix;
    } while(choix>4 || choix<1);
}

void AffichageTxt::effacerEcran()
{
    #ifdef _WIN32
      win.clear();
    #else
      std::cout << "\x1B[2J\x1B[H";
    #endif
}

void AffichageTxt::infoBat(Bateau bat, double & temps)
{
    std::cout << bat.getNom() << '\n';
    std::cout << "vie du bateau : ";
    for (int i = 0; i < bat.getPV(); i++) {
        std::cout << '|';
    }
    std::cout << '\n' << bat.getPV() << "/" << bat.getMaxPv();
    std::cout << '\n' << "taille equipage : " << bat.getEquipage()->getTabEquipage()->size() << '\n';
    for (unsigned int i = 0; i <bat.getListeArme()->size() ; i++) {
        std::cout << "degats cannon "<< i << " : "<< bat[i].getDegats()<< '\n';
        std::cout << "pv cannon "<< i << " : "<< bat[i].getPv()<< '\n';
        std::cout << "charge cannon "<< i << " : "<< fmod(temps,bat[i].getTempsRecharge()*100) << '/' << bat[i].getTempsRecharge()*100 << '\n';
    }
    std::cout << "================================" << '\n';
}

void AffichageTxt::infoArme(Arme arme)
{
    std::cout << "Niveau : " << arme.getPrix()/10 << '\n';
    std::cout << "Degats : " << arme.getDegats() << '\n';
    std::cout << "PV : " << arme.getPv() << '\n';
    std::cout << "Temps de tempsRecharge : " << arme.getTempsRecharge() << '\n';
}

void AffichageTxt::choixArme(int & choix, std::vector<Arme> * listeArme)
{
    effacerEcran();
    std::cout <<"Veuillez choisir une arme (entrer le numero)" << '\n';

    for (unsigned int i = 0; i < listeArme->size(); i++) {
        std::cout << "========== Numero " << i+1 << "==========" << '\n';
        infoArme(listeArme->at(i));
    }
    int tmp;
    std::cin >> tmp;
    choix=tmp;
}
