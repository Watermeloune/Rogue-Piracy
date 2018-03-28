#include "Matelot.h"

#include <stdlib.h>
#include <iostream>
#include <vector>

Arme::Arme (unsigned int degats, unsigned int nbMatelots, unsigned int maxPv, unsigned int prix) {
  this->degats = degats;
  this->nbMat = nbMatelots;
  this->pv = maxPv;
  this->maxPv = maxPv;
  this->prix = prix;
}

Arme::~Arme () {

}

unsigned int Arme::getDegats(){
  return degats;
}
unsigned int Arme::getNbMat(){
  return nbMat;
}

unsigned int Arme::getPv(){
  return pv;
}

unsigned int Arme::getMaxPv(){
  return maxPv;
}

unsigned int Arme::getPrix(){
  return prix;
}


void Arme::setDegats(unsigned int d){
  degats = d;
}

void Arme::setNbMat(unsigned int n){
  nbMat = n;
}

void Arme::setPv(unsigned int p){
  pv = p;
}

void Arme::setMaxPv(unsigned int m){
  maxPv = m;
}

void Arme::setPrix(unsigned int p){
  prix = p;
}

void Arme::reparer(unsigned int bonus);{
  pv += bonus;
  if (pv > maxPv) {
    pv = maxPv;
  }
}

void Arme::endommager(unsigned int degats){
  if (pv <= degats) {
    delete this;
  } else {
    pv -= degats;
  }
}

void Arme::ajouterMatelot(Matelot mat, unsigned int i) {
  if (i<nbMat) {
    if (!listeMat[i]) {
      listeMat[i] = mat;
    } else {
      bool test;
      std::cout << "l'emplacement est déjà occupé, voulez vous remplacer le matelot?" << '\n';
      std::cin >> test;
      if (test) {
        listeMat[i] = mat;
      }
    }
}   else {
        std::cout << "valeur trop grande pour i" << '\n';
    }
}
