#include <iostream>
#include "Bateau.h"

#ifndef ENNEMI_H
#define ENNEMI_H


class Ennemi
{
    public:
        Ennemi();
        ~Ennemi();

        void setType(bool newType);
        bool getType();

        void setBateau(std::vector<Bateau> * o );
        std::vector<Bateau> * getBateau();

    private:
        bool type;
        std::vector<Bateau> tabBateau;

};

#endif // ENNEMI_H
