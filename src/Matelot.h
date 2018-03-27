#ifndef MATELOT_H
#define MATELOT_H

#include <iostream>


class Matelot {
private:
  unsigned int _pv;
  unsigned int _force;
  bool _blesse;
  unsigned int _maxPv;
  std::string _nom;

public:
  Matelot (unsigned int force, unsigned int maxPv, std::nom);
  int getPv();
  int getForce();
  int getMaxPV();
  std::string getNom();

  void setPv(unsigned int pv);
  void setForce(unsigned int force);
  void setMaxPV(unsigned int maxPv);

  void soigner(unsigned int pv);
  void removePv(unsigned int pv);

  bool isHarmed();


  virtual ~Matelot ();
};

#endif /* end of include guard: MATELOT_H */
