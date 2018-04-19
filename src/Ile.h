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

        void  setMagasin() ;
        Objet getMagasin() ;

        void setArmurerie() ;
        Objet getArmurerie() ;

    private:

        bool type;
//        std::vector <Objet> Ressource ;
        int Ressource;
        std::vector <Objet> Magasin ;
        std::vector <Arme> Armurerie ;
};

#endif // Ile_H
