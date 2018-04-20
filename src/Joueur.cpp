#include "Joueur.h"

Joueur::Joueur()
{
    //ctor
}

Joueur::~Joueur()
{
    //dtor
}

void Joueur::setNom(std::string nouveauNom)
{
    nom=nouveauNom;
}
std::string getNom()
{
//    return nom;
}

void Joueur::setScore(int nouveauScore)
{
    score=nouveauScore;
}
int  Joueur::getScore()
{
    return score;
}

void Joueur::setArgent(int nouveauArgent)
{
    argent=nouveauArgent;
}
int  Joueur::getArgent()
{
    return argent;
}

void Joueur::setBateau(std::vector<Bateau> * o )
{
    this->tabBateau.clear();
    for (unsigned int i = 0; i < o->size(); i++) {
        this->tabBateau.push_back(o->at(i));
    }
}
std::vector<Bateau> * Joueur::getBateau()
{
    std::vector<Bateau> * b = & this->tabBateau;
    return b;
}
