#include "carta.h"
#include "db_carte.h"
#include <vector>
#ifndef RISERVA_H
#define RISERVA_H


class Riserva {
public:
    Riserva(int);
    // Set the Reserve decks and the amount of cards in each deck
    static const int num_carte_tesoro = 3;
    static const int num_carte_vittoria  = 3;
    static const int num_carte_regno = 10;
    
    Db_carte set_carte;
    Carta carte_in_gioco[num_carte_regno+num_carte_tesoro+num_carte_vittoria];		//Sets in the reserve
    int num_carte_riserva[num_carte_regno+num_carte_tesoro+num_carte_vittoria];		//Number of cards in each reserve set
    int numero_mazzi_terminati;
};


#endif // RISERVA_H
