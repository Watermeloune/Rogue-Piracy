#ifndef MATELOT_H
#define MATELOT_H

#include <iostream>
#include <cassert>


class Matelot {
private:
  unsigned int pv;
  unsigned int force;
  bool blesse;
  unsigned int maxPv;
  std::string nom;

public:
  Matelot (unsigned int force, unsigned int maxPv, std::string nom);
  unsigned int getPv();
  unsigned int getForce();
  unsigned int getMaxPV();
  std::string getNom();

  void setPv(unsigned int pv);
  void setForce(unsigned int force);
  void setMaxPV(unsigned int maxPv);
  void setNom(std::string nom);

  void soigner(unsigned int b);
  void removePv(unsigned int d);

  bool estBlesse();


  virtual ~Matelot ();
};

#endif /* end of include guard: MATELOT_H */
