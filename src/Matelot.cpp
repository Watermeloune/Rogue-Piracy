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
  pv = pv;
}

void Matelot::setForce(unsigned int force) {
  force = force;
}

void Matelot::setMaxPV(unsigned int maxPv) {
  maxPv = maxPv;
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
