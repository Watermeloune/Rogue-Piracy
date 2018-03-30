#ifndef CONSOMABLEMATELOT_H
#define CONSOMABLEMATELOT_H

#include <iostream>

#include "Matelot.h"



class ConsomableMatelot {
private:
    int ForceIndiv;
    int ForceGlobal;
    int PvIndiv;
    int pvGlobal;

public:
    ConsomableMatelot (int fi, int pi, int fg, pg);

    int getForceIndiv();
    int getForceGlobal()
    int getPvIndiv();
    int getPvGlobal();

    void setForceIndiv(int f);
    void setForceGlobal(int f)
    void setPvIndiv(int p);
    void setPvGlobal(int p);

    void utiliser(Matelot* Mat);
    void utiliser();

    ~ConsomableMatelot ();
};

#endif /* end of include guard: CONSOMABLEMATELOT_H */
