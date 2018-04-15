#include "Ile.h"

Ile::Ile()
{
    //ctor
}

Ile::Ile(int niveau)
{
    Bateau batlvl(niveau);
    bot=batlvl;

}

Ile::~Ile()
{
    //dtor
}
