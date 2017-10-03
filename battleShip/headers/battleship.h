#ifndef BATTLESHIP_H_INCLUDED
#define BATTLESHIP_H_INCLUDED

 #define N 7 
/** \brief function to generate Map, global function that ll call other function to generate boat an define players
 *
 * \param tab le carr� a afficher
 */
int generateMap(int tab[N][N]);

/** \brief remplit un carr� magique. Il doit initialement �tre vide (plein de 0)
 *
 * \param tab le carr� a remplir
 */
void generateBoat(int tab[N][N]);

#endif // BATTLESHIP_H_INCLUDED
