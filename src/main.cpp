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




int main() {
    Jeu jeu;
    jeu.boucle();

    return 0;
}
