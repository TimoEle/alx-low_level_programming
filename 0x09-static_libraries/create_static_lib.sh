#!/bin/bash
gcc -Wall -pendatic -Werror -Wextra -std=gnu89 -c *.c
ar -rc liball.a *.o
