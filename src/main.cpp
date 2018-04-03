#include <SFML/Graphics.hpp>
#include <iostream>
#include <typeinfo>
#include "Bateau.h"
#include "fonctions.h"
#include <chrono>
using namespace std;
using namespace chrono;


int main()
{
    Bateau bat(5,5,5,5,"tortuga");
    Matelot mt(5,5,"Jean Louis");

    cout << "taille equipage : " << bat.getEquipage()->getTabEquipage()->size()<< '\n';
    bat.getEquipage()->afficheEquipage();
    bat.getEquipage()->ajoutMatelot(mt);
    cout << "taille equipage : " << bat.getEquipage()->getTabEquipage()->size()<< '\n';
    bat.getEquipage()->afficheEquipage();


    long test = getTimeMs();
    std::cout << test << '\n';

    return 0;
}
