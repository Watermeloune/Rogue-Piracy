#include <SFML/Graphics.hpp>
#include <iostream>
#include <typeinfo>
#include "Bateau.h"
#include "Arme.h"
using namespace std;


int main()
{
    Bateau bat(5,5,5,5,"tortuga");
    Matelot mt(5,5,"Jean Louis");
    Arme a;

    bat.getListeArme()->push_back(a);
    std::cout << bat.getListeArme()->at(0).getPrix()<< '\n';

    return 0;
}
