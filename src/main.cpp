#include <SFML/Graphics.hpp>
#include <iostream>
#include "Matelot.h"
#include "Bateau.h"


int main()
{
    Matelot Pedro(5,10,"Pedro");
    int force;
    int maxPv;
    int Pv;
    std::string nom;

    std::cout << "Pv : " << Pedro.getPv() << '\n';
    std::cout << "Max Pv : " << Pedro.getMaxPV() << '\n';
    std::cout << "Force : " << Pedro.getForce() << '\n';
    std::cout << "Nom : " << Pedro.getNom() << '\n';

    std::cout << "=============================================" << '\n';

    std::cout << "set Force : ";
    std::cin >> force;
    Pedro.setForce(force);

    std::cout << "set maxPv : ";
    std::cin >> maxPv;
    Pedro.setMaxPV(maxPv);

    std::cout << "set Pv : ";
    std::cin >> Pv;
    Pedro.setPv(Pv);

    std::cout << "set Nom : ";
    std::cin >> nom;
    Pedro.setNom(nom);

    std::cout << "=============================================" << '\n';


    std::cout << "Pv : " << Pedro.getPv() << '\n';
    std::cout << "Max Pv : " << Pedro.getMaxPV ()<< '\n';
    std::cout << "Force : " << Pedro.getForce() << '\n';
    std::cout << "Nom : " << Pedro.getNom() << '\n';




    return 0;
}
