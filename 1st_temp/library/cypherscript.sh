#!/bin/bash
echo "compile!"
command gcc -c cypher_encode.c
gcc -c cypher_decode.c
echo  "just creating a lib.a adding .o files"
ar -crs libcypher.a cypher_encode.o cypher_decode.o
echo  "just opening a  .h file for you"
echo "void cypher_encode(char *text);" > libcypher.h
echo "void cypher_decode(char *text);" >> libcypher.h
echo  "just compiled .h and thelib.a"
