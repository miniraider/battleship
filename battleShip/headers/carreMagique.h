#ifndef CARREMAGIQUE_H_INCLUDED
#define CARREMAGIQUE_H_INCLUDED

#define N 7 // N doit �tre impaire

/** \brief affiche un carr�
 *
 * \param tab le carr� a afficher
 */
void afficheCarre(int tab[N][N]);

/** \brief remplit un carr� magique. Il doit initialement �tre vide (plein de 0)
 *
 * \param tab le carr� a remplir
 */
void remplirCarre(int tab[N][N]);

/** \brief V�rifie si un carr� donn� en argument est un carr�e magique ou non
 *
 * \param tab le carr� a v�rfier
 * \return 1 si le carr�e est magique, 0 sinon.
 */
int verifierCarre(int tab[N][N]);

#endif // CARREMAGIQUE_H_INCLUDED
