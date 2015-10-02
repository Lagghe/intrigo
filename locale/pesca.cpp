#include "pesca.h"
#include "mescola.h"
#include <iostream>

void pesca(Giocatore &cane, int dim_pescata) {

    for (int i = 0; i < dim_pescata; i++) {
	
	//If deck is empty join discard pile and shuffle 
	if (cane.mazzo.size() == 0) {
	    cane.mazzo.swap(cane.scarti);
	    mescola(cane.mazzo);
	}
	
	//Draw
	cane.mano.push_back(cane.mazzo.back());
	cane.mazzo.pop_back();
    }
}

void scarta(Giocatore &cane) {
    int dim_giocate = cane.giocate.size(), dim_mano = cane.mano.size();
    for (int i = 0; i < dim_giocate; i++)
	cane.scarti.push_back(cane.giocate[i]);
    for (int i = 0; i < dim_mano; i++)
	cane.scarti.push_back(cane.mano[i]);
    cane.giocate.erase(cane.giocate.begin(),cane.giocate.end());
    cane.mano.erase(cane.mano.begin(),cane.mano.end());
}