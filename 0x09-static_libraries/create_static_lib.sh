#!/bin/bash
gcc -Wall -pendatic -Werror -Wextra -c *.c
ar -cr liball.a *.o
