# Toretto - Tore (TOtall REcall) TTo (... Toretto, The f&f OP Leyend)

--> This is just the forked (first commit) code. The new code will be added soon. 

This is just a re-implementation of the Tore notification tool developed by Tsoding (... The ~~C...S...~~ Zoding OP (I)Engginer.  Nice guy, I think).


![Alt text](toretto-tokyo-drift.png)


This piece of ~~shit~~ shiny C-code uses the Nob C compiler tool created by Tsoding, an inplemetation of a Fast-&-Simple Standar Plain C Compiler (without any shiny library outside the standar Old School Plain C for Nobs like me).

The goal of this implementation is not to use sqlite3 and: 
  - Store the data in (maybe encrypted) binary format.
  - The data of the entities will be sequences of events (event-sorucered) that, to obtain the current state (projection) their events will be folded since their creation.
  - Possibility to incorporate it as a service of the linux system and use the logged in user as an encryption key.



~~You just need any Gnu-Linux desktop distro, or a WSL (Windows subsystem) distro to put this on the road.~~  
🥲 maybe no longer


--> And remeber, this is just recreational and educational programming. Do not blame.

The warning below is form the creator, and its refers to the compiler (I think).
> [!WARNING]
> The project is designed for my personal needs only, and may not be suitable for everybody. I do not offer any support for it either. It's completely Open Source, fork it and adapt it to your needs.



## Quick Start

# One shot command

```console
$ cc -o nob nob.c && ./nob && sudo cp ./build/toretto /usr/local/bin/ && echo "toretto" >> ~/.bashrc
```

OR

# Commands List

```console
$ cc -o nob nob.c
$ ./nob
$ sudo cp ./build/toretto /usr/local/bin/
$ echo "toretto" >> ~/.bashrc
```
