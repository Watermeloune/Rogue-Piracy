#include "Matelot.h"

Matelot::Matelot(int force, int maxPv, std::string nom) {
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
  maxPv = maxPv;
}

void Matelot::soigner(int b) {
  pv += b;
  if (pv >= maxPv) {
    pv = maxPv;
  }

  if (pv >= maxPv/2) {
    blesse = false;
  }
}

void Matelot::removePv(int d) {
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
