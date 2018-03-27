#include <iostream>

using namespace std;

#ifndef BATEAU_H
#define BATEAU_H


class Bateau
{
    public:
        Bateau();
        ~Bateau();

/**###########SET/GET#################*/
        void setPV();
        int  getPV();

        void setCapacite_cargo();
        int  getCapacite_cargo();

        void setCapacite_equipage();
        int  getCapacite_equipage();



//        void setSprite();
//        Sprite setSprite();

//        void setEquipage() ;
//        Equipage getEquipage() ;

//        void setCargo();
//        Objet getCargo();

//        void setListeArme();
//        Arme getListeArme();

        void setNom();
        string getNom();

/**###################################*/

/**##########FONCTIONALITÉS###########*/

//        void ajouterObjet(Objet objet);
//        void supprimerObjet(Objet objet);
//        void ajouterArme(Arme arme);
//        void supprimerArme(Arme arme);


    private:

        int PV;
        int capacite_cargo ;
        int capacite_equipage ;
//<<<<<<<
        // Sprite sprite ;
        //Equipage equipage ;
        //vector<Objet> cargo;
        //vector <Arme> listeArme;
        string nom ;
//=======

//>>>>>>> 9566cf95e55dedaa7c4198b3cf46e922136b8b43

};

#endif // BATEAU_H
