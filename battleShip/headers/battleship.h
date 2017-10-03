#ifndef BATTLESHIP_H_INCLUDED
#define BATTLESHIP_H_INCLUDED

 #define N 7 
/** \brief function to generate Map, global function that ll call other function to generate boat an define players
 *
 * \param tab le carré a afficher
 */
int generateMap(int tab[N][N]);

/** \brief remplit un carré magique. Il doit initialement être vide (plein de 0)
 *
 * \param tab le carré a remplir
 */
void generateBoat(int tab[N][N]);

#endif // BATTLESHIP_H_INCLUDED
