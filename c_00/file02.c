/*Scrivere un programma che dato un carattere e una stringa
da linea di comando, conti quante volte il carattere
compare nella stringa
c:> contaOccorrenze c stringaincuicercare
 Algoritmo
 Recuperare gli argomenti
 Scandire la stringa carattere per carattere, contando le occorrenze
del carattere dato
 Scrivere il numero di occorrenze a video
Esempio 1*/
#include <stdio.h>
int main (int argc, char* argv[]) {
int cont=0, i=0;
char ch=argv[1][0];
char *s=argv[2];
while (s[i] !=\0)
if (s[i++] = =ch) cont++;
printf (totale occorrenze: %d, cont);
}

