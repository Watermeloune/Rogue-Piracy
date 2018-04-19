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


void  Ile::setRessource(int ressourceAjouteeOuSoustree)//à corriger
{
    Ressource = ressourceAjouteeOuSoustree;

}

int  Ile::getRessource()
{
	return Ressource; //à corriger
}
