#include <stdio.h>
#include <stdlib.h>
#include "../headers/battleship.h"

int generateMap(int tab[N][N])
{
	for(int line = 0; line < N; line++) {
		for(int column = 0; column < N; column++) {
			printf("  %d  ", tab[line][column]);
		}
		printf("\n");
	}
	return 0;
}
