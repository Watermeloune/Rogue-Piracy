#ifndef JEU_H
#define JEU_H
#include "Bateau.h"
#include "Ile.h"
#include <iostream>

class Jeu {
private:


public:
    Bateau joueur;
    Bateau ennemi;
    Ile ile;

    Jeu();
    ~Jeu();
    void Combat();

};

#endif
