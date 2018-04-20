#include <iostream>
#include "Bateau.h"

#ifndef JOUEUR_H
#define JOUEUR_H


class Joueur
{
    public:
        Joueur();
        ~Joueur();

        void setNom(std::string nouveauNom);
        std::string getNom();

        void setScore(int nouveauScore);
        int getScore();

        void setArgent(int nouveauArgent);
        int getArgent();

        void setBateau(std::vector<Bateau> * o );
        std::vector<Bateau> * getBateau();


    private:
        std::vector<Bateau> tabBateau;
        int argent;
        int score;
        std::string nom;

};

#endif // JOUEUR_H
