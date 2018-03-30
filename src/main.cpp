#include <SFML/Graphics.hpp>
#include <iostream>
#include <typeinfo>
#include "Bateau.h"
using namespace std;


int main()
{
    Bateau bat(5,5,5,5,"tortuga");
    Matelot mt(5,5,"Jean Louis");

    cout << "taille equipage : " << bat.getEquipage()->getTabEquipage()->size()<< '\n';
    bat.getEquipage()->afficheEquipage();
    bat.getEquipage()->ajoutMatelot(mt);
    cout << "taille equipage : " << bat.getEquipage()->getTabEquipage()->size()<< '\n';
    bat.getEquipage()->afficheEquipage();



    return 0;
}
