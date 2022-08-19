/*
Esempio 2
 Scrivere un programma che sommi tutti i numeri
passati come argomenti a linea di comando e
stampi a video questo risultato.
 Algoritmo
 Recuperare gli argomenti
 Trasformare ciascun argomento (stringa) in un intero: si
utilizza una funzione di libreria int atoi(char *)
 Scrivere il risultato a video
Esempio 2*/
#include <stdio.h>
int main (int argc, char* argv[]) {
int sum=0, i=0;
while (i < (argc-1)) sum += atoi(argv
[++i]);
printf (somma totale : %d
, sum);
}

