#include <iostream>
#include <cassert>
#include "Equipage.h"
#include "Arme.h"
#include "Objet.h"
#include <cstdlib>

#ifndef BATEAU_H
#define BATEAU_H


class Bateau
{
    public:
        Bateau();
        Bateau(int maxPv, int PV, int capacite_cargo, int capacite_equipage, std::string nom);
        ~Bateau();
        Bateau(int niveau);

/**###########SET/GET#################*/
        void setPV(int PV);
        int  getPV();

        void setMaxPv(int maxPv);
        int  getMaxPv();

        void setCapacite_cargo(int cap);
        int  getCapacite_cargo();

        void setCapacite_equipage(int cap);
        int  getCapacite_equipage();

        void operator=(Bateau copie);

        void verifDetruit();

        void endommager(int dmg);



//        void setSprite();
//        Sprite setSprite();

        void setEquipage(Equipage * ptr);
        Equipage * getEquipage() ;

//        void setCargo();
//        Objet getCargo();

//        void setListeArme();
        std::vector<Arme> * getListeArme();

        void setNom(std::string nom);
        std::string getNom();

/**###################################*/

/**##########FONCTIONALITÉS###########*/

        void ajouterObjet(Objet objet);
//        void supprimerObjet(Objet objet);
        void ajouterArme(Arme arme);
//        void supprimerArme(Arme arme);


    private:

        int PV;
        int maxPv;
        int capacite_cargo ;
        int capacite_equipage ;
//<<<<<<<
        // Sprite sprite ;
        Equipage equipage;
        std::vector<Objet> cargo;
        std::vector<Arme> listeArme;
        std::string nom ;
//=======

//>>>>>>> 9566cf95e55dedaa7c4198b3cf46e922136b8b43

};

#endif // BATEAU_H
