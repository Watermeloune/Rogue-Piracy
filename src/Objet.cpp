#include "Objet.h"
#include <iostream>

Objet::Objet(int p, std::string n) {
    prix = p;
    nom = n;
}

Objet::~Objet() {

}


int Objet::getPrix() {
    return prix;
}

std::string Objet::getNom() {
    return nom;
}



void Objet::setPrix(int p) {
    prix = p;
}

void Objet::setNom(std::string n) {
    nom = n;
}

Objet::Objet(std::string NOM)
{

}
