#ifndef OBJET_H
#define OBJET_H

#include <iostream>



class Objet {
private:
    int prix;
    std::string nom;
    std::string cheminIcone;

public:
    Objet (int p, std::string n);
    ~Objet ();

    int getPrix();
    std::string getNom();
    std::string getCheminIcone();

    void setPrix(int p);
    void setNom(std::string n);
    void SetCheminIcone(std::string c);
};

#endif /* end of include guard: OBJET_H */
