# Toretto - Tore (TOtall REcall) TTo (... Toretto, The f&f op leyend)

This is just a re-implementation of the Tore notification tool developed by Tsoding (... The Zoding OP (I)engginer nice guy, I think).


![Alt text](toretto-tokyo-drift.png)


This piece of ~~shit~~ shiny C-code uses the Nob C compiler tool created by Tsoding, an inplemetation of a Fast-&-Simple Standar Plain C Compiler (without any shiny library outside the standar Old School Plain C for Nobs like me).

The goal of this implementation is not to use sqlite3 and: 
  - Store the data in (maybe encrypted) binary format.
  - The data of the entities will be sequences of events (event-sorucered) that, to obtain the current state (projection) their events will be folded since their creation.
  - Possibility to incorporate it as a service of the linux system and use the logged in user as an encryption key.

You just need any Gnu-Linux desktop distro, or a WSL (Windows subsystem) distro to put this on the road.  

--> This is just the forked (first commit) code. The new code will be added soon. 

--> And remeber, this is just recreational and educational programming. Do not blame.


## Quick Start

```console
$ cc -o nob nob.c
$ ./nob
$ sudo cp ./build/tore /usr/local/bin/
$ echo "tore" >> ~/.bashrc
```
