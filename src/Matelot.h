#ifndef MATELOT_H
#define MATELOT_H

#include <iostream>


class Matelot {
private:
  int _pv;
  int _force;
  bool _blesse;
  int _maxPv;
  std::string _nom;

public:
  Matelot (int force, int maxPv, std::nom);
  int GET_pv();
  int GET_force();
  int GET_maxPV();
  std::string GET_nom();

  void SET_pv(int pv);
  void SET_force(int force);
  void SET_maxPV(int maxPv);

  void addPv(int pv);
  void removePv(int pv);

  bool isHarmed();


  virtual ~Matelot ();
};

#endif /* end of include guard: MATELOT_H */
