/*---File di intestazione .h---*/



#ifndef EXTERN_VAR_H //Da notare che l'estenzione .h e' scritta come _H e tutte le lettere sono in MAIUSCOLO
#define EXTERN_VAR_H


/*---L'inizializzazione della variabile avviene senza anteporre nessun modificatore---*/
int y = 29; // Esempio 1: variabile dichiarata e inizializzata nel file di intestazione .h 
extern int x; // Esempio 2: Variabile dichiarata nel file di intestazione .h ma inizializzata nel file di implementazione .cpp
extern int z;
void prt();



#endif