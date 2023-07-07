#!/bin/bash
sudo gcc -Wall -pendatic -Werror -Wextra -std=gnu89 -c *.c
sudo ar -rc liball.a *.o
