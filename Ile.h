#ifndef Ile_H
#define Ile_H

#include <cstdlib>
#include <iostream>
#include "Objet.h"
#include "Arme.h"

class Ile
{
    public:
        Ile();
        Ile(int niveau);
        ~Ile();

        void setType();
        bool getType();

        void  setTabRessource() ;
        Objet getTabRessource() ;

        void  setTabMagasin() ;
        Objet getTabMagasin() ;

        void setTabArmurerie() ;
        Objet getTabArmurerie() ;

    private:

        bool type;
        vector <Objet> tabRessource ;
        vector <Objet> tabMagasin ;
        vector <Arme> tabArmurerie ;
};

#endif // Ile_H
