#include "Matelot.h"

Matelot::Matelot(unsigned int force, unsigned int maxPv, std::string nom) {
  this->force = force;
  this->maxPv = maxPv;
  this->pv = maxPv;
  this->blesse = false;
  this->nom = nom;
}

Matelot::~Matelot() {

}

unsigned int Matelot::getPv() {
  return pv;
}

unsigned int Matelot::getForce() {
  return force;
}

unsigned int Matelot::getMaxPV() {
  return maxPv;
}

std::string Matelot::getNom() {
  return nom;
}

void Matelot::setPv(unsigned int pv) {
    assert(pv<=maxPv);
  this->pv = pv;
}

void Matelot::setForce(unsigned int force) {
  this->force = force;
}

void Matelot::setMaxPV(unsigned int maxPv) {
  this->maxPv = maxPv;
}

void Matelot::setNom(std::string nom)
{
    this->nom = nom;
}


void Matelot::soigner(unsigned int b) {
  pv += b;
  if (pv >= maxPv) {
    pv = maxPv;
  }

  if (pv >= maxPv/2) {
    blesse = false;
  }
}

void Matelot::removePv(unsigned int d) {
  if (d >= pv) {
    delete this;
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
