#include "Ennemi.h"

Ennemi::Ennemi()
{
    //ctor
}

Ennemi::~Ennemi()
{
    //dtor
}

void Ennemi::setType(bool newType)
{
	type = newType ;
}

bool Ennemi::getType()
{
	return type;
}

void Ennemi::setBateau(std::vector<Bateau> * o )
{
    this->tabBateau.clear();
    for (unsigned int i = 0; i < o->size(); i++) {
        this->tabBateau.push_back(o->at(i));
    }
}
std::vector<Bateau> * Ennemi::getBateau()
{
    std::vector<Bateau> * b = & this->tabBateau;
    return b;
}
