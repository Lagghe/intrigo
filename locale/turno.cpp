#include "turno.h"

void Inizia_Turno (Riserva &r, Giocatore &cane, Intelligenza_artificiale &cervello_del_cane) {
    
    int numero_azioni = 1, numero_acquisti = 1;
    Turno(r,cane,cervello_del_cane,numero_azioni,numero_acquisti);
    
}

void Turno(Riserva &r ,Giocatore &cane, Intelligenza_artificiale &cervello_del_cane, int numero_azioni, int numero_acquisti) {
    
    bool fine_turno = 0;
    int carta_da_acquistare = 0, carta_da_giocare = 0, mossa = 3;
    
    mossa = cervello_del_cane.decidi_cosa_fare(r,cane,numero_azioni,numero_acquisti,&carta_da_giocare,&carta_da_acquistare);
    
    switch(mossa) {
	
	case 1:						//Play an action
	    
	    gioca_carta(cane,&numero_azioni,&numero_acquisti,cane.mano[carta_da_giocare]); 
	    
	    numero_azioni--;
	    cane.giocate.push_back(cane.mano[carta_da_giocare]);
	    cane.mano.erase(cane.mano.begin() + carta_da_giocare);
	    break;
	    
	case 2:	   					//Buy 
	    
	    numero_acquisti--;
	    cane.scarti.push_back(r.carte_in_gioco[carta_da_acquistare]);
	    r.num_carte_riserva[carta_da_acquistare]--;
	    if(r.num_carte_riserva[carta_da_acquistare] == 0) {
		r.numero_mazzi_terminati++;
	    }
	    //Update victory points
	    cane.punti += r.carte_in_gioco[carta_da_acquistare].n_punti;
	    
	    fine_turno = 1;
	    break;
	    
	case 3:						//Pass
	    
	    fine_turno = 1;
	    break;
	    
    }
    
    if (fine_turno)
	return;
    else Turno(r,cane,cervello_del_cane,numero_azioni,numero_acquisti);
    
}

void gioca_carta(Giocatore &cane, int* numero_azioni,int* numero_acquisti,Carta card_to_be_played) {
    
    numero_azioni += card_to_be_played.n_azioni;
    numero_acquisti += card_to_be_played.n_acquisti;
    pesca(cane,card_to_be_played.n_piucarte);
    
}


bool is_ended(Riserva &r) {
    if (r.num_carte_riserva[5] == 0 || r.numero_mazzi_terminati == 3)
	return 1;
    
}

int who_won(setting_Giocatori &giocatori, int n_giocatori) {
    
    
    int vincitore = -1, punti_vincitore = giocatori.insieme_giocatori[0].punti;
    
    for (int i = 1; i < n_giocatori; i++)
	if (giocatori.insieme_giocatori[i].punti > punti_vincitore) {
	    punti_vincitore = giocatori.insieme_giocatori[i].punti;
	    vincitore = i;
	}
    
    return vincitore;

}
