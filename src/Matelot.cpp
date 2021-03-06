#include "Matelot.h"
#include <chrono>

Matelot::Matelot(int force, int maxPv, std::string nom) {
  this->force = force;
  this->maxPv = maxPv;
  this->pv = maxPv;
  this->blesse = false;
  this->nom = nom;
  //this->id = getTimeMs();
}
//constructeur vide qui cree un Jean Louis
Matelot::Matelot() {
  this->force = 1;
  this->maxPv = 1;
  this->pv = 1;
  this->blesse = false;
  this->nom = "Jean-Louis";
}
//destructeur par défaut
Matelot::~Matelot() {

}

int Matelot::getPv() {
  return pv;
}

int Matelot::getForce() {
  return force;
}

int Matelot::getMaxPV() {
  return maxPv;
}

std::string Matelot::getNom() {
  return nom;
}

void Matelot::setPv(int pv) {
    assert(pv>=0);
  pv = pv;
}

void Matelot::setForce(int force) {
    assert(force>=0);
  this->force = force;
}

void Matelot::setMaxPV(int maxPv) {
    assert(maxPv>=0);
  this->maxPv = maxPv;
}

void Matelot::setNom(std::string nom)
{
    this->nom = nom;
}


void Matelot::soigner(int b) {
    assert(b>=0);
  pv += b;
  if (pv >= maxPv) {
    pv = maxPv;
  }

  if (pv >= maxPv/2) {
    blesse = false;
  }
}

void Matelot::removePv(int d) {
    assert(d>=0);
    if (d >= pv) {
        pv=0;
    } else {
        pv -= d;
    }

    if (pv < maxPv/2) {
        blesse = true;
    }
}

bool Matelot::estBlesse() {
  return blesse;
}
