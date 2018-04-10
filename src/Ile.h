#ifndef Ile_H
#define Ile_H

#include <cstdlib>
#include <iostream>
class Ile
{
    public:
        Ile();
        Ile(int niveau);
        ~Ile();

        void setType();
        bool getType();

        void  getTabRessource() ;
        Objet getTabRessource() ;

        void  setTabMagasin() ;
        Objet getTabMagasin() ;

        void setTabArmurerie() ;
        Objet getTabArmurerie() ;

    private:

        //bool type;
        vector <Objet> tabRessource ;
        vector <Objet> tabMagasin ;
        vector <Arme> tabArmurerie ;
};

#endif // Ile_H
