#include "Equipage.h"

Equipage::Equipage ()
{

}
Equipage::~Equipage (){}

void Equipage::ajoutMatelot(Matelot matelot)
{
    this->equipage.push_back(matelot);
}

void Equipage::ajoutMatelot()
{
    Matelot mt(5,5,"DERPI");
    this->equipage.push_back(mt);
    std::cout << "wWTTTFFF" << '\n';
}

void Equipage::afficheEquipage()
{
    for (unsigned int i = 0; i < this->equipage.size(); i++) {
        std::cout << this->equipage.at(i).getNom() << '\n';
    }
}

std::vector<Matelot> * Equipage::getTabEquipage()
{
    std::vector<Matelot> * v = & this->equipage;
    return v;
}
