#include <SFML/Graphics.hpp>
#include <iostream>
#include <typeinfo>
#include "Bateau.h"
#include "Arme.h"
#include <thread>
#include <chrono>
#include <unistd.h>
#include <termios.h>
#include <cassert>
#include <time.h>
#include <unistd.h>
#include <map>

using namespace std;

#if _WIN32
#include <windows.h>
#endif

void effacerEcran()
{
    #ifdef _WIN32
      win.clear();
    #else
      std::cout << "\x1B[2J\x1B[H";
    #endif
}

void afficheInfoBat(Bateau bat)
{
    std::cout << bat.getNom() << '\n';
    std::cout << "vie du bateau : ";
    for (int i = 0; i < bat.getPV(); i++) {
        std::cout << '|';
    }
    std::cout << '\n' << bat.getPV() << "/" << bat.getMaxPv();
    std::cout << '\n' << "taille equipage : " << bat.getEquipage()->getTabEquipage()->size() << '\n';
    std::cout << "================================" << '\n';
}


int main()
{
    
    //init
        Bateau bat(10,10,10,10,"Radeau");
        int lvl=1;
        Objet obj(5,"potion");

    while (bat.getPV()!=0)
    {
        effacerEcran();
        std::cout << "bienvenue sur l'ile numero "<< lvl << '\n';
        std::cout << "vous gagnez un objet" << '\n';
        bat.ajouterObjet(obj);
        usleep(1*1000000);
        Bateau bot(lvl);

        while(bot.getPV()!=0)
        {
            effacerEcran();
            afficheInfoBat(bat);
            afficheInfoBat(bot);
            std::cout << "vous attaquez le bateau ennemi" << '\n';
            bot.endommager(1);
            //bot.setPV(bot.getPV()-1);
            usleep(0.5*1000000);
        }
        lvl++;

    }



  return 0;
}
