#ifndef MATELOT_H
#define MATELOT_H

#include <iostream>


class Matelot {
private:
  int pv;
  int force;
  bool blesse;
  int maxPv;
  std::string nom;

public:
  Matelot (int force, int maxPv, std::nom);
  int getPv();
  int getForce();
  int getMaxPV();
  std::string getNom();

  void setPv(int pv);
  void setForce(int force);
  void setMaxPV(int maxPv);

  void soigner(int b);
  void removePv(int d);

  bool estBlesse();


  virtual ~Matelot ();
};

#endif /* end of include guard: MATELOT_H */
