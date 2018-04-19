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

        void setType(bool newType);
        bool getType();

        void  setRessource(int ressourceAjouteeOuSoustree) ;
        int getRessource() ;

        void setTabRessource(std::vector<Objet> * r );
        std::vector<Objet> * getTabRessource();

        void setTabMagasin(std::vector<Objet> * o );
        std::vector<Objet> * getTabMagasin() ;

        void setTabArmurerie(std::vector<Objet> * o ) ;
        std::vector<Objet> * getTabArmurerie() ;

    private:

        bool type;
        int Ressource;
        std::vector <Objet> tabRessource ; //inutile !!
        std::vector <Objet> tabMagasin ;
        std::vector <Arme> Armurerie ;
};

#endif // Ile_H
