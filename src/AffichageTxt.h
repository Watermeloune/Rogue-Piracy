#ifndef AFFICHAGETXT_H
#define AFFICHAGETXT_H

#include "Jeu.h"

class AffichageTxt
{
public:
    AffichageTxt();
    ~AffichageTxt();

    void debut(std::string & nom, int & choix, Arme arme1, Arme arme2, Arme arme3);
    void effacerEcran();
    void infoBat(Bateau bat, double & temps);
    void infoArme(Arme arme);
    void choixArme(int & choix, std::vector<Arme> * listeArme);
};
#endif
