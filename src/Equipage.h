#ifndef EQUIPAGE_H
#define EQUIPAGE_H
#include <vector>
#include "Matelot.h"

class Equipage {
private:
    std::vector<Matelot> tabEquipage;
public:
    Equipage ();
    ~Equipage ();
    void ajoutMatelot(Matelot matelot);
    void ajoutMatelot();
    void afficheEquipage();
    std::vector<Matelot> * getTabEquipage();

};


#endif
