#include "giocatore.h"
#include "riserva.h"
#ifndef INTELLIGENZA_ARTIFICIALE_H
#define INTELLIGENZA_ARTIFICIALE_H

class Intelligenza_artificiale
{
public:
Intelligenza_artificiale();
    int decidi_cosa_fare(Riserva&,Giocatore&,int,int,int *,int *);
};

#endif // INTELLIGENZA_ARTIFICIALE_H
