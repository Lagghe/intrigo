#include "carta.h"
#include "riserva.h"
#include "intelligenza_artificiale.h"
#include "mescola.h"
#include "pesca.h"
#include <vector>

#ifndef GIOCATORI_H
#define GIOCATORI_H
using namespace std;

class setting_Giocatori
{
    static const int num_max_giocatori = 4;
    static const int num_rami_iniziali = 7;
    static const int num_tenute_iniziali = 3;
    static const int lung_mano_iniziale = 5;
    static const int lung_mazzo_iniziale = 10;
public:
    setting_Giocatori(int, Riserva);
    int numero_giocatori;
    vector<Giocatore> insieme_giocatori;
    vector<Intelligenza_artificiale> insieme_intelligenze;
};

#endif // GIOCATORI_H
