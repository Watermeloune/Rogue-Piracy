#include "Equipage.h"

Equipage::Equipage ()
{
    std::cout << "equipage cree" << '\n';
}
Equipage::~Equipage (){}

void Equipage::ajoutMatelot(Matelot matelot)
{
    this->tabEquipage.push_back(matelot);
}

void Equipage::ajoutMatelot()
{
    Matelot mt(5,5,"JUAN");
    this->tabEquipage.push_back(mt);
}

void Equipage::afficheEquipage()
{
    for (unsigned int i = 0; i < this->tabEquipage.size(); i++) {
        std::cout << this->tabEquipage[i].getNom() << '\n';
    }

}

void Equipage::verifMort()
{
    for (size_t i = 0; i < tabEquipage.size(); i++) {
        if(tabEquipage[i].getPv()==0)
            tabEquipage.erase(tabEquipage.begin()+i);
    }
}

std::vector<Matelot> * Equipage::getTabEquipage()
{
    std::vector<Matelot> * v = & this->tabEquipage;
    return v;
}
