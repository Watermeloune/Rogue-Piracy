#ifndef MATELOT_H
#define MATELOT_H

#include <iostream>
#include <cassert>


class Matelot {
private:
  int pv;
  int force;
  bool blesse;
  int maxPv;
  std::string nom;
  int id; 

public:
  Matelot (int force, int maxPv, std::string nom);
  Matelot();
  int getPv();
  int getForce();
  int getMaxPV();
  std::string getNom();

  void setPv(int pv);
  void setForce(int force);
  void setMaxPV(int maxPv);
  void setNom(std::string nom);

  void soigner(int b);
  void removePv(int d);

  bool estBlesse();


  virtual ~Matelot ();
};

#endif /* end of include guard: MATELOT_H */
