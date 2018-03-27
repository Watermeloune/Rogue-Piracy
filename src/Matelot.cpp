#include "Matelot.h"

Matelot::Matelot(unsigned int force, unsigned int maxPv, unsigned std::string nom) {
  _force = force;
  _maxPv = maxPv;
  _pv = maxPv;
  _blesse = false;
  _nom = nom;
}

Matelot::~Matelot() {
  
}

int Matelot::getPv() {
  return _pv;
}

int Matelot::getForce() {
  return _force;
}

int Matelot::getMaxPV() {
  return _maxPv;
}

std::string Matelot::getNom() {
  return _nom;
}

void Matelot::setPv(int pv) {
  _pv = pv;
}

void Matelot::setForce(int force) {
  _force = force;
}

void Matelot::setMaxPV(int maxPv) {
  _maxPv = maxPv
}

void Matelot::soigner(int pv) {
  setPv(_pv + pv);
  if (_pv >= _maxPv) {
    _pv = _maxPv;
  }

  if (_pv >= _maxPv/2) {
    _blesse = false;
  }
}

void Matelot::removePv(int pv) {
  if (pv >= _pv) {
    delete this;
  } else {
    setPv(_pv - pv);
  }

  if (_pv < _maxPv/2) {
    _blesse = true;
  }
}

bool Matelot::isHarmed() {
  return _blesse;
}
