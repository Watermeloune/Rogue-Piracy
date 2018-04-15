#include "Jeu.h"
Jeu::Jeu()
{

}

Jeu::~Jeu()
{

}

bool Jeu::toucheEstPressee(char touche)
{

}

void Jeu::init()
{
    debut=true;

    Bateau bat(10,10,10,10,"l'Espadon");
    Arme arme1(1,1,3,10);
    Arme arme2(1,1,3,10);
    bat.ajouterArme(arme1);
    bat.ajouterArme(arme2);
    Matelot mat1(5,5,"Jeans-Louis");
    Matelot mat2(5,5,"Juan-Pedro");
    bat.getEquipage()->ajoutMatelot(mat1);
    bat.getEquipage()->ajoutMatelot(mat2);

    usleep(5*1000000);
    debut=false;
}

void Jeu::boucleAttente()
{
    attente=true;

    while(attente)
    {

    }
}
