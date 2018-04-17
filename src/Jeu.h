#ifndef JEU_H
#define JEU_H
#include "Bateau.h"
#include "AffichageTxt.h"
#include "Ile.h"
#include <iostream>
#include <unistd.h>
#include <atomic>
#include <termios.h>
#include <thread>
#include <chrono>



class Jeu {
    private:


    public:
        Bateau joueur;
        Bateau ennemi;
        Ile ile;
        //AffichageTxt affichage;

        int niveau;

        bool debut;
        bool attente;
        bool enCombat;
        double temps;
        //temps en centieme de seconde

        Jeu();
        ~Jeu();



        void init();
        void boucle();
        void combat();
        void boucleAttente();
        void recompence();


};

#endif
