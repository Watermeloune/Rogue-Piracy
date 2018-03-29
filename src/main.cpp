#include <SFML/Graphics.hpp>
#include <iostream>
#include <typeinfo>
#include "Bateau.h"
using namespace std;


int main()
{
    Matelot mt(5,5,"JE SUIS LE MAIN");
    Bateau bat(5,5,5,5,"tortuga");
    bat.getEquipage().equipage.push_back(mt);
    std::cout << bat.getEquipage().equipage.size() << '\n';
    return 0;
}
