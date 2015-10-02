#include "intelligenza_artificiale.h"
#include <iostream>
using namespace std;

Intelligenza_artificiale::Intelligenza_artificiale()
{

}
//Input: riserva; mano, mazzo, giocate e scarti del giocatore; azioni e acquisti disponibili; 
//	 quale carta giocare; quale carta acquistare.
int Intelligenza_artificiale::decidi_cosa_fare(Riserva &r,Giocatore& cane,int azioni_disponibili,int acquisti_disponibili,int * azione_scelta,int *acquisto_scelto) {
    
    int scegli = 3;
    int soldi_in_mano = 0;
    int dim_mano = cane.mano.size();
    int n_mazzi_riserva = r.num_carte_regno + r.num_carte_tesoro + r.num_carte_vittoria;
    bool hai_li_sordi = 0;
    
    cout << "La tua mano: \n\t\t";
    for (int i = 0; i < dim_mano; i++) {
	soldi_in_mano += cane.mano[i].n_soldi;
	cout << cane.mano[i].nome << "\t";
    }
    
    cout << "\nVuoi giocare un'azione, effettuare un acquisto o passare?\n 1: Azione\n 2: Acquisto\n 3: Passa\n\t";
    cin >> scegli;
    
    switch (scegli) {
	case 1:
	    
	    cout << "Quale azione vuoi giocare?\n";
	    for (int i = 0; i < dim_mano; i++)
		if(cane.mano[i].azione == 1)
		    cout << "\t" << i+1 << ": " << cane.mano[i].nome << "\n";
	    cin >> *azione_scelta;
	    (*azione_scelta)--;
	    return 1;
	    
	    break;
	case 2:
	    
	    cout << "Cosa vuoi acquistare?\t\t\t(mazzi terminati: " << r.numero_mazzi_terminati << ")\n";
	    
	    for (int i = 0; i < n_mazzi_riserva; i++)
		cout << i+1 << ": " << r.carte_in_gioco[i].nome << "\t Costo: " << r.carte_in_gioco[i].costo <<
			"\t\tal termine del mazzo: " << r.num_carte_riserva[i] << "\n";
	    do {
	    cin >> *acquisto_scelto;
	    (*acquisto_scelto)--;
	    if (r.carte_in_gioco[*acquisto_scelto].costo <= soldi_in_mano) hai_li_sordi = 1;
	    else cout << "Non hai abbastanza soldi, avido!\n";
	    }
	    while(!hai_li_sordi);
	    return 2;
	    
	    break;
	case 3:
	    return 3;
	    break;
    }
    
}
