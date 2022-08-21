/******************************************************************************

Write a program that takes a string, and displays the 
first 'a' character it
encounters in it, followed by a newline. If there are no 
'a' characters in the
string, the program just writes a newline. If the number 
of parameters is not
1, the program displays 'a' followed by a newline.
******************************************************************************
1 se incontri una a scrivila e newline
2 se non ci sono a scrivi una newline
3 se il numero di parametri non e' 1 mostra una a e una newline
*****************************************************************************/


#include <unistd.h>
int main (int argc, char *argv[])
{
int i;
i = 0;
/* argc e' il numero di parametri contenuti nell array argv 
se e' 1 (+1 l array parte da zero) se non e' 2 (quindi 1) stampa a\n */
if (argc != 2)
{
write(1, "a\n", 2);
return (0);
}

else

/* argv contiene i caratteri ,while e' vero fino a che argv [1] contiene zero */
{
while (argv[1][i])
{
    
if (argv[1][i] == 'a')
{
write(1, "a", 1);
break ;
}
i += 1;
/* incrementa */
}
/* se non ci sono a , scrivi newline*/
write(1, "\n", 1);
return (0);
}
}
