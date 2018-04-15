#ifndef Ile_H
#define Ile_H

#include <cstdlib>
#include <iostream>
#include "Bateau.h"

class Ile
{
    public:
        Ile();
        Ile(int niveau);
        ~Ile();

        Bateau bot;

        void setType();
        bool getType();

        void  setTabRessource() ;
        Objet getTabRessource() ;

        void  setTabMagasin() ;
        Objet getTabMagasin() ;

        void setTabArmurerie() ;
        Objet getTabArmurerie() ;

    private:

        //bool type;
        std::vector<Objet>tabRessource ;
        std::vector<Objet>tabMagasin ;
        std::vector<Arme> abArmurerie ;

};

#endif // Ile_H
