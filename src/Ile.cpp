#include "Ile.h"

Ile::Ile()
{
    //ctor
}

Ile::Ile(int niveau)
{
    srand(time(NULL));

}

Ile::~Ile()
{
    //dtor
}


void Ile::setType(bool newType)
{
	type = newType ;
}

bool Ile::getType()
{
	return type;
}


void  Ile::setRessource(int ressourceAjouteeOuSoustree)
{
    Ressource = ressourceAjouteeOuSoustree;

}

int  Ile::getRessource()
{
	return Ressource;
}

void Ile::setTabRessource(std::vector<Objet> * r )//tab Ressource
{
    this->tabRessource.clear();
    for (unsigned int i = 0; i < r->size(); i++) {
        this->tabRessource.push_back(r->at(i));
    }
}


std::vector<Objet> * Ile::getTabRessource()
{
    std::vector<Objet> * r = & this->tabRessource;
    return r;
}





void Ile::setTabMagasin(std::vector<Objet> * o )//newMagasin
{
    this->tabMagasin.clear();
    for (unsigned int i = 0; i < o->size(); i++) {
        this->tabMagasin.push_back(o->at(i));
    }
}


std::vector<Objet> * Ile::getTabMagasin()
{
    std::vector<Objet> * m = & this->tabMagasin;
    return m;
}

