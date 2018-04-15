#include "Bateau.h"
Bateau::Bateau()
{

}

Bateau::Bateau(int maxPv, int PV, int capacite_cargo, int capacite_equipage, std::string nom)
{
    this->maxPv=maxPv;
    this->PV=PV;
    this->capacite_cargo=capacite_cargo;
    this->capacite_equipage=capacite_equipage;
    this->nom=nom;
}

Bateau::~Bateau()
{
    //dtor
}

Bateau::Bateau(int niveau)
{
    srand(time(NULL));

    int min=3+niveau*2;
    int max=5+niveau*2;

    maxPv=(rand() % (max - min + 1)) + min;
    PV=maxPv;
    capacite_cargo=(rand() % (max - min + 1)) + min;
    capacite_equipage=(rand() % (max - min + 1)) + min;
    nom="bateau lvl "+std::to_string(niveau);
    Arme arme(1,1,1,1);
    listeArme.push_back(arme);
}

void Bateau::setPV(int PV)
{
    assert(PV>=0);
    assert(PV<=maxPv);
    this->PV=PV;
}

void Bateau::operator=(Bateau copie)
{
    maxPv=copie.getMaxPv();
    PV=copie.getPV();
    capacite_cargo=copie.getCapacite_cargo();
    capacite_equipage=copie.getCapacite_equipage();
    setEquipage(copie.getEquipage());
    nom=copie.getNom();
    setListeArme(copie.getListeArme());
}

Arme Bateau::operator[](int n)
{
    return listeArme.at(n);
}

int Bateau::getPV()
{
    return this->PV;
}

void Bateau::setMaxPv(int maxPv)
{
    assert(maxPv>=0);
    this->maxPv=maxPv;
}

int Bateau::getMaxPv()
{
    return this->maxPv;
}


void Bateau::setCapacite_cargo(int cap)
{
    assert(cap>=0);
    this->capacite_cargo=cap;
}

int Bateau::getCapacite_cargo()
{
    return this->capacite_cargo;
}

void Bateau::setCapacite_equipage(int cap)
{
    assert(cap>=0);
    this->capacite_equipage=cap;
}

int Bateau::getCapacite_equipage()
{
    return this->capacite_equipage;
}

void Bateau::setNom(std::string nom)
{
    this->nom=nom;
}

std::string Bateau::getNom()
{
    return this->nom;
}

void Bateau::setEquipage(Equipage * ptr)
{
    this->equipage.getTabEquipage()->clear();
    for (unsigned i = 0; i < ptr->getTabEquipage()->size(); i++) {
        this->equipage.getTabEquipage()->push_back(ptr->getTabEquipage()->at(i));
    }
}

Equipage * Bateau::getEquipage()
{
    Equipage * e = & this->equipage;
    return e;
}

void Bateau::setListeArme(std::vector<Arme> * v)
{
    this->listeArme.clear();
    for (unsigned int i = 0; i < v->size(); i++) {
        this->listeArme.push_back(v->at(i));
    }
}

std::vector<Arme> * Bateau::getListeArme()
{
    std::vector<Arme> * v = & this->listeArme;
    return v;
}

void Bateau::ajouterArme(Arme arme)
{
    listeArme.push_back(arme);
}

void Bateau::supprimerArme(int numero)
{
    listeArme.erase(listeArme.begin()+numero);
}

void Bateau::endommager(int dmg)
{
    assert(dmg>=0);
    if(dmg>=this->PV)
        this->PV=0;
    else
        this->PV=PV-dmg;
}
void Bateau::ajouterObjet(Objet objet)
{
    this->cargo.push_back(objet);
}

void Bateau::tirer(Arme arme, Bateau & ennemi)
{
    ennemi.endommager(arme.getDegats());
}

/*void Bateau::verifDetruit()
{
    for (size_t i = 0; i < listeArme.size(); i++) {
        if(listeArme[i].getPv()==0)
            listeArme.erase(listeArme.begin()+i);
    }
}*/
