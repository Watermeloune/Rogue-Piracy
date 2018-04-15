#include "Jeu.h"
Jeu::Jeu()
{

}

Jeu::~Jeu()
{

}


void Jeu::Combat()
{
    while (ennemi.getPV()!=0 && joueur.getPV()!=0)
    {
        joueur.tirer(joueur[0],ennemi);
        std::cout << ennemi.getPV() << '\n';
    }
}
