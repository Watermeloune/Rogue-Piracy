#ifndef OBJET_H
#define OBJET_H

#include <iostream>



class Objet {
private:
    int prix;
    std::string nom;

public:
    Objet (int p, std::string n);
    Objet(std::string nom);
    ~Objet ();

    int getPrix();
    std::string getNom();

    void setPrix(int p);
    void setNom(std::string n);
};

#endif /* end of include guard: OBJET_H */
