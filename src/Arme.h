#ifndef ARME_H
#define ARME_H

#include <vector>
#include <iostream>

#include "Matelot.h"

class Arme {
private:
  int degats;
  int nbMat; //nombre de matelots nécessaire pour utiliser l'arme
  int pv;
  int maxPv;
  int prix;
  std::vector<Matelot> listeMat;


public:
  Arme (int degats, int nbMatelots, int maxPv, int prix);

  int getDegats();
  int getNbMat();
  int getPv();
  int getMaxPv();
  int getPrix();

  void setDegats(int d);
  void setNbMat(int n);
  void setPv(int p);
  void setMaxPv(int m);
  void setPrix(int p);

  void reparer(int bonus);
  void endommager(int degats);
  void ajouterMatelot(Matelot mat, int i);

  virtual ~Arme ();


};

#endif /* end of include guard: ARME_H */
