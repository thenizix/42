 La libreria cypherlib e' un test banale:
 Ho scritto delle funzioni dentro dei files.c
li ho compilati usando gcc  con l opzione   -c
Creando dei file .o che sono Oggetti e non eseguibili.

Poi ho usato la funzione UNIX ar
       ar -crs libcypher.a cypher_encode.o cypher_decode.o

-c (create)   -r (add with replace)  -s (index)
per creare una libreria libcypher.a


per automatizzare i processi ho fatto uno script in bash.
Se si vuole scrivere una nuova funzione
bastera' aggiungere a mano la dichiarazione
editando il file cypherscript.sh


possiamo vedere quali moduli sono contenuti nella libreria
usando ar  e l'opzione -t
                  ar -t libcypher.a


usando ar, possiamo anche ricompilare e sostituire i moduli .o dalle librerie
ar -rsv libcipher.a cipher_version.o
qui per esempio cancello la libreria indicata
              ar -dsv libcipher.a cypher_version.o
