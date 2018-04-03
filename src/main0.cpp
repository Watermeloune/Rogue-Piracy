#include <SFML/Graphics.hpp>
#include <iostream>
#include <typeinfo>
#include "Bateau.h"
#include <chrono>
using namespace std;
using namespace chrono;


int main()
{
    Bateau bat(5,5,5,5,"tortuga");
    Matelot mt(5,5,"Jean Louis");

    cout << "taille equipage : " << bat.getEquipage()->getTabEquipage()->size()<< '\n';
    bat.getEquipage()->afficheEquipage();
    bat.getEquipage()->ajoutMatelot(mt);
    cout << "taille equipage : " << bat.getEquipage()->getTabEquipage()->size()<< '\n';
    bat.getEquipage()->afficheEquipage();

    //high_resolution_clock::time_point t2 = high_resolution_clock::now();
    //duration<long int, std::nano> time_span = t2;
    //std::cout << "time: " << time_span.count();

    auto now = std::chrono::system_clock::now();
    auto now_ms = std::chrono::time_point_cast<std::chrono::milliseconds>(now);
    auto epoch = now_ms.time_since_epoch();
    auto value = std::chrono::duration_cast<std::chrono::milliseconds>(epoch);
    long duration = value.count();
    std::cout << duration << '\n';

    return 0;
}
