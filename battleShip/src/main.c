#include <stdio.h>
#include <stdlib.h>
#include "../headers/battleship.h"

int main()
{
    int tab[N][N] = {};
    printf("Welcome on battleship game!\n");
    printf("Generating board \n");
    printf("Display board\n");
    generateMap(tab);
    return 0;
}
