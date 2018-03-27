#include "Matelot.h"

Matelot::Matelot(unsigned int force, unsigned int maxPv, unsigned std::string nom) {
  _force = force;
  _maxPv = maxPv;
  _pv = maxPv;
  _blesse = false;
  _nom = nom;
}


int GET_pv() {
  return _pv;
}

int GET_force() {
  return _force;
}

int GET_maxPV() {
  return _maxPv;
}

std::string GET_nom() {
  return _nom;
}

void SET_pv(int pv) {
  _pv = pv;
}

void SET_force(int force) {
  _force = force;
}

void SET_maxPV(int maxPv) {
  _maxPv = maxPv
}

void addPv(int pv) {
  SET_pv(_pv + pv);
  if (_pv >= _maxPv) {
    _pv = _maxPv;
  }

  if (_pv >= _maxPv/2) {
    _blesse = false;
  }
}

void removePv(int pv) {
  if (pv >= _pv) {
    delete this;
  } else {
    SET_pv(_pv - pv);
  }

  if (_pv < _maxPv/2) {
    _blesse = true;
  }
}

bool isHarmed() {
  return _blesse;
}
