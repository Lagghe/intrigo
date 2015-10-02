#include "giocatori.h"


#include <iostream>

setting_Giocatori::setting_Giocatori(int numero_giocatori, Riserva r) {    
    
    //Inizializza
    insieme_giocatori.resize(numero_giocatori);
    insieme_intelligenze.resize(numero_giocatori);
    
    //Crea mazzo iniziale
    
    vector<Carta> mazzo_singolo;
    //create one deck - 7 Coppers + 3 Estates
    mazzo_singolo.assign(7,r.set_carte.elenco_carte[0]);
    for (int i = num_rami_iniziali; i < lung_mazzo_iniziale; i++) 
	mazzo_singolo.push_back(r.set_carte.elenco_carte[3]);
    
    //Give the same deck to all players
    for (int j = 0 ; j < numero_giocatori ; j++) {
	insieme_giocatori[j].mazzo = mazzo_singolo;
    }
	
    for (int j = 0 ; j < numero_giocatori ; j++) {
    
	//Shuffle the deck and draw 5 cards
	mescola(insieme_giocatori[j].mazzo);
	pesca(insieme_giocatori[j],lung_mano_iniziale);
    }

//     //Mostra mano
//     for (int j = 0; j < numero_giocatori; j++) {
// 	for (int i = 0; i < insieme_giocatori[j].mazzo.size(); i++) 
//   	    std::cout << insieme_giocatori[j].mazzo[i].nome << " ";
//   	std::cout << "\n";
//     }
}
