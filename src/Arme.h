#ifndef ARME_H
#define ARME_H

#include <vector>

#include "Matelot.h"

class Arme {
private:
  unsigned int degats;
  unsigned int nbMat; //nombre de matelots nécessaire pour utiliser l'arme
  unsigned int pv;
  unsigned int maxPv;
  unsigned int prix;
  std::vector<Matelot> listeMat;


public:
  Arme (int degats, int nbMatelots, int maxPv, int prix);

  unsigned int getDegats();
  unsigned int getNbMat();
  unsigned int getPv();
  unsigned int getMaxPv();
  unsigned int getPrix();

  void setDegats(unsigned int d);
  void setNbMat(unsigned int n);
  void setPv(unsigned int p);
  void setMaxPv(unsigned int m);
  void setPrix(unsigned int p);

  void reparer(int bonus);
  void endommager(int degats);


  virtual ~Arme ();


};

#endif /* end of include guard: ARME_H */
