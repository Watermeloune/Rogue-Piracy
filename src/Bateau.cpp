#include "Bateau.h"

Bateau::Bateau(int PV, int capacite_cargo, int capacite_equipage)
{
    this->PV=PV;
    this->capacite_cargo=capacite_cargo;
    this->capacite_equipage=capacite_equipage;
}

Bateau::~Bateau()
{
    //dtor
}

void Bateau::setPV(int PV)
{
    this->PV=PV;
}

int Bateau::getPV()
{
    return this->PV;
}

void Bateau::setCapacite_cargo(int cap)
{
    this->capacite_cargo=cap;
}

int Bateau::getCapacite_cargo()
{
    return this->capacite_cargo;
}

void Bateau::setCapacite_equipage(int cap)
{
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
