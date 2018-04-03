#include "Bateau.h"

Bateau::Bateau(int maxPv, int PV, int capacite_cargo, int capacite_equipage, std::string nom)
{
    this->maxPv=maxPv;
    this->PV=PV;
    this->capacite_cargo=capacite_cargo;
    this->capacite_equipage=capacite_equipage;
    this->nom=nom;
}

Bateau::~Bateau()
{
    //dtor
}

void Bateau::setPV(int PV)
{
    assert(PV>=0);
    assert(PV<=maxPv);
    this->PV=PV;
}

int Bateau::getPV()
{
    return this->PV;
}

void Bateau::setMaxPv(int maxPv)
{
    assert(maxPv>=0);
    this->maxPv=maxPv;
}

int Bateau::getMaxPv()
{
    return this->maxPv;
}


void Bateau::setCapacite_cargo(int cap)
{
    assert(cap>=0);
    this->capacite_cargo=cap;
}

int Bateau::getCapacite_cargo()
{
    return this->capacite_cargo;
}

void Bateau::setCapacite_equipage(int cap)
{
    assert(cap>=0);
    this->capacite_equipage=cap;
}

int Bateau::getCapacite_equipage()
{
    return this->capacite_equipage;
}

void Bateau::setNom(std::string nom)
{
    this->nom=nom;
}

std::string Bateau::getNom()
{
    return this->nom;
}

void Bateau::setEquipage(Equipage equipage)
{
    //constructeur par copie a faire
}

Equipage * Bateau::getEquipage()
{
    Equipage * e = & this->equipage;
    return e;
}

std::vector<Arme> * Bateau::getListeArme()
{
    std::vector<Arme> * v = & this->listeArme;
    return v;
}

/*void Bateau::verifDetruit()
{
    for (size_t i = 0; i < listeArme.size(); i++) {
        if(listeArme[i].getPv()==0)
            listeArme.erase(listeArme.begin()+i);
    }
}*/
