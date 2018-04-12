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


void Ile::setType(bool changeType)
{
	type = changeType ;
}

bool Ile::getType()
{
	return type;
}


void  Ile::setTabRessource(Objet o)//à corriger
{


}

Objet Ile::getTabRessource()
{
	return TabRessource; //à corriger
} 
