#ifndef Ile_H
#define Ile_H

#include <cstdlib>
#include <iostream>
<<<<<<< HEAD
#include "Bateau.h"
=======
#include "Objet.h"
#include "Arme.h"

>>>>>>> 49fd0601b536313b149dffcb8e9f0aaee9156011
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

<<<<<<< HEAD
        //bool type;
        std::vector<Objet>tabRessource ;
        std::vector<Objet>tabMagasin ;
        std::vector<Arme> abArmurerie ;
=======
        bool type;
        vector <Objet> tabRessource ;
        vector <Objet> tabMagasin ;
        vector <Arme> tabArmurerie ;
>>>>>>> 49fd0601b536313b149dffcb8e9f0aaee9156011
};

#endif // Ile_H
