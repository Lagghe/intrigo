#include "carta.h"
#include <vector>

#ifndef GIOCATORE_H
#define GIOCATORE_H

using namespace std;

class Giocatore
{
public:
    Giocatore();
    vector<Carta> mano;
    vector<Carta> mazzo;
    vector<Carta> scarti;
    vector<Carta> giocate;
    int punti;
    bool sta_vincendo;
    
};

#endif // GIOCATORE_H
