#include "Matelot.h"

Matelot::Matelot(unsigned int force, unsigned int maxPv, unsigned std::string nom) {
  this->force = force;
  this->maxPv = maxPv;
  this->pv = maxPv;
  this->blesse = false;
  this->nom = nom;
}

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
  pv = pv;
}

void Matelot::setForce(int force) {
  force = force;
}

void Matelot::setMaxPV(int maxPv) {
  maxPv = maxPv
}

void Matelot::soigner(int pv) {
  setPv(pv + pv);
  if (pv >= maxPv) {
    pv = maxPv;
  }

  if (pv >= maxPv/2) {
    blesse = false;
  }
}

void Matelot::removePv(int pv) {
  if (pv >= pv) {
    delete this;
  } else {
    setPv(pv - pv);
  }

  if (pv < maxPv/2) {
    blesse = true;
  }
}

bool Matelot::estBlesse() {
  return blesse;
}
