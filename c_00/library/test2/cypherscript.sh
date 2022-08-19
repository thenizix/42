#!/bin/bash
# remove old files
rm cypher_version.o
rm cypher_encode.o
rm cypher_decode.o
rm  libcypher.a
rm libcypher.h
echo "compile!"
gcc -c cypher_version.c
gcc -c cypher_encode.c
gcc -c cypher_decode.c
echo  "just creating a lib.a adding .o files"
ar -crs libcypher.a  cypher_version.o cypher_encode.o cypher_decode.o
echo  "just opening a  .h file for you"
echo "void cypher_encode(char *text);" > libcypher.h
echo "void cypher_decode(char *text);" >> libcypher.h
echo "void cypher_version(void);" >> libcypher.h
echo  "just compiled .h and thelib.a"
## D.nencini for 42 prep
