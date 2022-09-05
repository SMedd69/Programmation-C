#include <stdio.h>
#include "programModul.h"

void bonjour(void)
{
	printf("\t\t\n\n\n\n ==> Bonjour <== \n");
}

void age(void)
{
	int age1;

	printf("\t\tQuel age as-tu ? \n \t\t==> ");
	scanf("%d", &age1);
	printf(" \n\tVous avez => %d\n", age1);
	if(age1 < 18)
	{
		printf(" \n\n\n\t\t~~> Vous etes mineur... Retour chez maman ! < ~ ~ ~ ~ ~ ~ \n\n\n");
		age();
	}
	else
	{
		printf("\n\t\t ~ ~ > Supeer vous etes majeur et vaccine ! Passons a la suite.\n");
		printf("\n\n\t\t Jouons un jeu de calcul < ~ ~ ~ ~ ~ ~ ~ \n\n");
		jeuCalcul();
	}
}

void jeuCalcul(void)
{
	int nb1;
	int nb2;
	int resultat;
	printf("\n\t\t ~ ~ > Choisis un nombre < ~ ~\n\t\t ==> ");
	scanf("%d", &nb1);
	printf("\n\n\t\t ~ > Choisis encore un deuxieme nombre ==> ");
	scanf("%d", &nb2);
	printf("\n\n\t\t~ > Et maintenant combien font %d + %d = ", nb1, nb2);
	scanf("%d", &resultat);
	if(resultat == nb1 + nb2)
	{
		printf("\n\n\t\t = = > Ton resultat est ~ ~ ~ ~ > %\n\t\t BRAVOO !! \n\n\t\t ~ ~ ~ ~ > Passons au niveau suivant < ~ ~ ~ ~", resultat);
		jeuCalculNv1();
	}
	else
	{
		printf("\tTon resultat est %d < ~ ~ ~ ~\n \n - - - > Tu as perdu !\n\n\t Recommence !!\n\n\n\n", resultat);
		jeuCalcul();
	}
}

void jeuCalculNv1(void)
{
	int nb1 = 4;
	int nb2 = 6;
	int resultat;
	printf("\n\t\t ~ ~ > NIVEAU 1 < ~ ~\n\t\t ==> ");

        printf("\n\n\t\t~ > Combien font %d x %d = ", nb1, nb2);
        scanf("%d", &resultat);
        if(resultat == nb1 * nb2)
        {
		printf("\n\n\t\t = = > Ton resultat est ~ ~ ~ ~ > %\n\t\t BRAVOO !!", resultat);
        	jeuCalculNv2();
	}
        else
        {
		printf("\tTon resultat est %d < ~ ~ ~ ~\n \n - - - > Tu as perdu !\n\n\t Recommence !!\n\n\n\n", resultat);
		jeuCalculNv1();
        }

}

void jeuCalculNv2(void)
{
        int nb1 = 9;
        int nb2 = 4;
        int resultat;
        printf("\n\t\t ~ ~ > NIVEAU 2 < ~ ~\n\t\t ==> ");

        printf("\n\n\t\t~ > Combien font %d x %d = ", nb1, nb2);
        scanf("%d", &resultat);
        if(resultat == nb1 * nb2)
        {
                        printf("\n\n\t\t = = > Ton resultat est ~ ~ ~ ~ > %\n\t\t BRAVOO !!", resultat);
        }
        else
        {
                printf("\tTon resultat est %d < ~ ~ ~ ~\n \n - - - > Tu as perdu !\n\n\t Recommence !!\n\n\n\n", resultat);
                jeuCalculNv2();
        }

}

