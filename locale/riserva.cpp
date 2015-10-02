#include "riserva.h"
#include <iostream>


Riserva::Riserva(int num_players) {
    
    numero_mazzi_terminati = 0;
    
    // The first tree cards are the standard Treasure cards
    for (int i = 0 ; i < num_carte_tesoro; i++)	{
	carte_in_gioco[i] = set_carte.elenco_carte[i];
	switch (i){
	case 0:		//Rame
	    num_carte_riserva[i] = 50;
	    break;
	case 1:		//Argento
	    num_carte_riserva[i] = 40;
	    break;
	case 2:		//Oro
	    num_carte_riserva[i] = 30;
	    break;
	}
    }

    // Then there are the standard Victory cards
    for (int i = num_carte_tesoro; i < num_carte_tesoro + num_carte_vittoria; i++) {
	carte_in_gioco[i] = set_carte.elenco_carte[i];
	if (num_players == 2)
	    num_carte_riserva[i] = 8;
	else
	    num_carte_riserva[i] = 12;
    }
  
  
    // Now randomly choose the next 10 Kingdom card
    // Actually in this case they are not random, because we have just 10 Kingdom decks
    // at disposal
  
    for (int i = num_carte_tesoro + num_carte_vittoria; i < num_carte_tesoro + num_carte_vittoria + num_carte_regno; i++) {
    
	carte_in_gioco[i] = set_carte.elenco_carte[i];
	//Victory Kingdom card
	if (carte_in_gioco[i].vittoria == 1) {
	    if (num_players <= 2)
		num_carte_riserva[i] = 8;
	    else
		num_carte_riserva[i] = 12;
	}
	//Action Kingdom card
	else num_carte_riserva[i] = 10;
    
    }

//     for (int i = 0; i < num_carte_regno+num_carte_tesoro+num_carte_vittoria; i++) {
// 	std::cout << carte_in_gioco[i].nome << " " << num_carte_riserva[i] << "\n";
//     }
}



