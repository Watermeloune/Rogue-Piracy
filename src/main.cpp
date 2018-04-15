#include <SFML/Graphics.hpp>
#include <iostream>
#include <typeinfo>
#include <thread>
#include <chrono>
#include <unistd.h>
#include <termios.h>
#include <cassert>
#include <time.h>
#include <unistd.h>
#include <map>
#include <atomic>
#include "Jeu.h"


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

void instantInput() //change proprietees console pour unbuffered input
{
  struct termios ctrl;
  tcgetattr(STDIN_FILENO, &ctrl);
  ctrl.c_lflag &= ~ICANON; // turning off canonical mode makes input unbuffered
  tcsetattr(STDIN_FILENO, TCSANOW, &ctrl);
}
std::atomic<bool> stop(false);

void loop() {
    int i=0;
    while(!stop)
    {

        i++;
    }
    std::cout << i << '\n';
}

void test()
{
    bool bi;
    std::cin >> bi;
    stop=bi;
}

int main() {
    // ...
    std::thread t(loop); // Separate thread for loop.
    std::thread t2(test);
    t2.join();
    t.join(); // This actually starts a thread.



    // ... other actions ...
    return 0;
}
