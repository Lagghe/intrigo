
#include "gioco.h"
#include "giocatori.h"
#include "riserva.h"
#include "riserva.cpp"
#include <iostream>




// bool Gioco::vincitore_parziale(int vincitore[]) {
//   //Conta i punti e valuta se ci sono pareggi
//   vincitore[0] = 1;
//   int punti_vincitore = punteggio_giocatori[0];
//   bool pareggio = 0;
//   
//   for (int i = 0; i < numero_giocatori; i++) {
//     
//     if (punteggio_giocatori[i] > punti_vincitore) {
//       vincitore[i] = 1;
//       punti_vincitore = punteggio_giocatori[i];
//       bool pareggio = 0;
//       //I precedenti non sono più vincitori
//       for (int j = 0; j < i; j++)
// 	vincitore[j] = 0;
//     }
//     
//     if (punteggio_giocatori[i] == punti_vincitore) {
//       vincitore[i] = 1;
//       bool pareggio = 1;
//     }
//   return pareggio;
//   }
// }
// 
// int Gioco::elenca_vincitori(int i) {
//   if (i < numero_giocatori)
//     if (vincitore[i] == 1) {
//       std::cout << ++i;
//       elenca_vincitori(i);
//     }
// }
// 
// int Gioco::vincitore_partita() {
//   
//   if (pareggio == 0) 
//     for (int i = 0; i < numero_giocatori; i++)
//       if (vincitore[i] == 1)
// 	return i+1;
//   std::cout << "Pareggio! ";
//   std::cout << "Vincono i giocatori:\t";
//   elenca_vincitori(0);
// }