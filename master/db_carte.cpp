#include "db_carte.h"


Db_carte::Db_carte() {
    Carta base, carta;
    
    carta.nome = "Rame";
    carta.tesoro = 1;
    carta.n_soldi = 1;
    carta.costo = 0;
    
    elenco_carte.push_back(carta);
    carta = base;
    
    carta.nome = "Argento";
    carta.tesoro = 1;
    carta.n_soldi = 2;
    carta.costo = 3;
    
    elenco_carte.push_back(carta);
    carta = base;
    
    carta.nome = "Oro";
    carta.tesoro = 1;
    carta.n_soldi = 3;
    carta.costo = 6;
    
    elenco_carte.push_back(carta);
    carta = base;
    
    carta.nome = "Tenuta";
    carta.vittoria = 1;
    carta.costo = 2;
    carta.n_punti = 1;
    
    elenco_carte.push_back(carta);
    carta = base;
    
    carta.nome = "Ducato";
    carta.vittoria = 1;
    carta.costo = 5;
    carta.n_punti = 3;
    
    elenco_carte.push_back(carta);
    carta = base;
    
    carta.nome = "Provincia";
    carta.vittoria = 1;
    carta.costo = 8;
    carta.n_punti = 6;
    
    elenco_carte.push_back(carta);
    carta = base;
    
    carta.nome = "Taglialegna";
    carta.azione = 1;
    carta.costo = 3;
    carta.n_soldi = 2;
    carta.n_acquisti = 1;
    
    elenco_carte.push_back(carta);
    carta = base;
    
    carta.nome = "Baraccopoli";
    carta.costo = 3;
    carta.azione = 1;
    carta.n_azioni = 2;
    carta.speciale = 1;
    
    elenco_carte.push_back(carta);
    carta = base;
    
    carta.nome = "Grande Salone";
    carta.costo = 3;
    carta.azione = 1;
    carta.vittoria = 1;
    carta.n_piucarte = 1;
    carta.n_azioni = 1;
    carta.n_punti =1;
    
    elenco_carte.push_back(carta);
    carta = base;
    
    carta.nome= "Battirame";
    carta.costo = 4;
    carta.azione = 1;
    carta.speciale = 1;
    
    elenco_carte.push_back(carta);
    carta = base;
    
    carta.nome = "Cospiratori";
    carta.costo = 4;
    carta.azione = 1;
    carta.n_soldi = 2;
    carta.speciale = 1;
    
    elenco_carte.push_back(carta);
    carta = base;
    
    carta.nome = "Ponte";
    carta.azione = 1;
    carta.costo = 4;
    carta.n_acquisti = 1;
    carta.n_soldi = 1;
    carta.speciale = 1;
    
    elenco_carte.push_back(carta);
    carta = base;
    
    carta.nome = "Villaggio";
    carta.azione = 1;
    carta.costo = 3;
    carta.n_azioni = 2;
    carta.n_piucarte = 1;
    
    elenco_carte.push_back(carta);
    carta = base;
    
    carta.nome = "Duca";
    carta.vittoria = 1;
    carta.costo = 5;
    carta.speciale = 1;
    
    elenco_carte.push_back(carta);
    carta = base;
    
    carta.nome = "Tributo";
    carta.azione = 1;
    carta.costo = 5;
    carta.speciale = 1;
    
    elenco_carte.push_back(carta);
    carta = base;
    
    carta.nome = "Harem";
    carta.vittoria = 1;
    carta.costo = 6;
    carta.tesoro = 1;
    carta.n_punti = 2;
    
    elenco_carte.push_back(carta);
    carta = base;
    
}
