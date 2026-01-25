gcc -Wall -E 19-module.c -o 19-module.i
gcc -Wall -E 19-ariph.c -o 19-ariph.i
gcc -Wall -E 19-utils.c -o 19-utils.i

gcc -Wall -S 19-module.i -o 19-module.s
gcc -Wall -S 19-ariph.i -o 19-ariph.s
gcc -Wall -S 19-utils.i -o 19-utils.s

gcc -Wall -g3 -c 19-module.c
gcc -Wall -g3 -c 19-ariph.c
gcc -Wall -g3 -c 19-utils.c

gcc -Wall 19-module.o 19-ariph.o 19-utils.o -o a.out
