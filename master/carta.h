#include <string>
#ifndef CARTA_H
#define CARTA_H

class Carta {
  
public:
  std::string nome;
  bool vittoria;
  bool tesoro;
  bool azione;
  int costo;
  int n_azioni;
  int n_acquisti;
  int n_piucarte;
  int n_soldi;
  int n_punti;
  bool speciale;
  
  Carta();
};

#endif // CARTA_H
