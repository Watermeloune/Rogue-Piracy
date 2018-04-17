#include "Matelot.h"
#include "Arme.h"
#include <stdlib.h>
#include <iostream>
#include <vector>

Arme::Arme (int degats, int nbMatelots, int maxPv, int prix, int tempsRecharge) {
  this->degats = degats;
  this->nbMat = nbMatelots;
  this->pv = maxPv;
  this->maxPv = maxPv;
  this->prix = prix;
  this->tempsRecharge= tempsRecharge;
}

Arme::~Arme () {

}

Arme::Arme(int niveau)
{
    int total=4+2*niveau;

    tempsRecharge=rand()%total/2+1;
    total-=tempsRecharge;
    maxPv=rand()%total/2+1;
    total-=maxPv;
    degats=rand()%total+1;

    nbMat=niveau;
    pv=maxPv;
    prix=niveau*10;



}

Arme::Arme()
{
    this->degats = 0;
    this->nbMat = 0;
    this->pv = 0;
    this->maxPv = 0;
    this->prix = 0;
}

int Arme::getDegats(){
  return degats;
}
int Arme::getNbMat(){
  return nbMat;
}

int Arme::getPv(){
  return pv;
}

int Arme::getMaxPv(){
  return maxPv;
}

int Arme::getPrix(){
  return prix;
}


void Arme::setDegats(int d){
  degats = d;
}

void Arme::setNbMat(int n){
  nbMat = n;
}

void Arme::setPv(int p){
  pv = p;
}

void Arme::setMaxPv(int m){
  maxPv = m;
}

void Arme::setPrix(int p){
  prix = p;
}

void Arme::reparer(int bonus){
  pv += bonus;
  if (pv > maxPv) {
    pv = maxPv;
  }
}

void Arme::endommager(int degats){
  if (pv <= degats) {
    pv=0;
  } else {
    pv -= degats;
  }
}

int Arme::getTempsRecharge()
{
    return tempsRecharge;
}

void Arme::setTempsRecharge(int temps)
{
    tempsRecharge=temps;
}

bool Arme::estPretATirer(double temps)
{
    double tmp=1.0*tempsRecharge;
    if(fmod((temps/100.0),tmp)==0 && temps!=0)
    {
        return true;
    }
    else
        return false;
}

void Arme::ajouterMatelot(Matelot mat, int i) {
  /*if (i<nbMat) {
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
    }*/
}
