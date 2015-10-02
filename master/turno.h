#include "riserva.h"
#include "giocatori.h"
#include "giocatore.h"
#include "intelligenza_artificiale.h"
#include "pesca.h"
#include <vector>
#ifndef TURNO_H
#define TURNO_H


//During his turn, player can play a card, buy a card or pass. In order to 
//decide what to do, he must know his hand, have access to the deck (draw)
//and to the discard pile (remember something already played or shuffle 
//the deck). Oh, he should also know who the temporary winner is.
 
void Inizia_Turno(Riserva &, Giocatore &, Intelligenza_artificiale&);
void Turno(Riserva &, Giocatore &, Intelligenza_artificiale&, int, int);
void gioca_carta(Giocatore &, int*, int*, Carta);
bool is_ended(Riserva &);
int who_won(setting_Giocatori &,int);

enum mossa { gioca_azione = 1, acquista = 2, passa = 3 };

#endif // TURNO_H
