#ifndef ARME_H
#define ARME_H

class Arme {
private:
  unsigned int degats;
  unsigned int nbMat;
  unsigned int pv;
  unsigned int maxPv;
  unsigned int prix;

public:
  Arme (int degats, int nbMatelots, int maxPv, int prix);
  virtual ~Arme ();
  
};

#endif /* end of include guard: ARME_H */
