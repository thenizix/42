#include <stdio.h>
#include <stdlib.h>

#include "libcypher.h"

int main(int argc, char *argv[])
{
 char text[]=" i love  Linux";

 puts(text);

 cypher_encode(text);
 puts(text);

 cypher_decode(text);
 puts(text);

 exit (0);

} // end of main
