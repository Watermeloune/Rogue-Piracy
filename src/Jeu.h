#ifndef JEU_H
#define JEU_H
#include "Bateau.h"
#include "Ile.h"
#include <iostream>
#include <unistd.h>


class Jeu {
    private:


    public:
        Bateau joueur;
        Bateau ennemi;
        Ile ile;

        bool debut;
        bool attente;

        Jeu();
        ~Jeu();

        bool toucheEstPressee(char touche);

        void combat();
        void init();
        void boucleAttente();


};

#endif
