#ifndef CARREMAGIQUE_H_INCLUDED
#define CARREMAGIQUE_H_INCLUDED

#define N 7 // N doit être impaire

/** \brief affiche un carré
 *
 * \param tab le carré a afficher
 */
void afficheCarre(int tab[N][N]);

/** \brief remplit un carré magique. Il doit initialement être vide (plein de 0)
 *
 * \param tab le carré a remplir
 */
void remplirCarre(int tab[N][N]);

/** \brief Vérifie si un carré donné en argument est un carrée magique ou non
 *
 * \param tab le carré a vérfier
 * \return 1 si le carrée est magique, 0 sinon.
 */
int verifierCarre(int tab[N][N]);

#endif // CARREMAGIQUE_H_INCLUDED
