#include "giocatori.h"
#include "giocatore.h"
#include "riserva.h"
#include "turno.h"


#include <iostream>
#include <ctime>
using namespace std;

int main() {
    
    const int num_max_turni = 100;
    int number_of_players = 0, turni_giocati = 0, vincitore_partita;
    bool fine_partita = 0;
    
    srand( unsigned (time(0)) );

    cout << "Numero di giocatori:\t";
    cin >> number_of_players;
    
    Riserva riserva(number_of_players);
    setting_Giocatori players(number_of_players,riserva);
    
    for (int l = 0; l < num_max_turni; l++) {
	cout << "\t\t\t\t\tTurno " << turni_giocati+1 <<endl << endl;
	for (int k = 0; k < number_of_players; k++) {
	    
	    cout << "\t\t\t\t\tGiocatore " << k+1 << endl;
	    Inizia_Turno(riserva,players.insieme_giocatori[k],players.insieme_intelligenze[k]);
	    scarta(players.insieme_giocatori[k]);
	    pesca(players.insieme_giocatori[k],5);
	    
	    //Check whether game is finished
	    fine_partita = is_ended(riserva);
	    if (fine_partita) {
		
		l = num_max_turni;
		k = number_of_players;
		
	    }
	}
	turni_giocati++;
    }
    
    vincitore_partita = who_won(players,number_of_players);
    
    cout << "Turni giocati: \t" << turni_giocati << std::endl;
    cout << "Vincitore: \t";
    switch (vincitore_partita) {
	case -1:
	    cout << "Nessuno, c'è stato un pareggio e hanno perso tutti." << endl;
	    break;
	default:
	    cout << "Giocatore " << vincitore_partita+1 << ".\t Complimenti!" << endl;
    }
    
    return 0;
}
