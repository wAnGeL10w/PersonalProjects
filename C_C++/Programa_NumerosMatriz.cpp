/*Programa Arreglos-Matriz*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	//Declaracion de Variales
	int c, c2, n_p, n_ne, n_n, Matriz[5][6];
	//Sentencia For
	for (c=0; c<=4; c++)
	{
		for (c2=0; c2<=5; c2++)
		{
			printf("Elemento %d,%d: ",c,c2);
			scanf("%d",&Matriz[c][c2]);
		}
	}
	system("cls");
	for (c=0; c<=4; c++)
	{
		printf("\n");
		for (c2=0; c2<=5; c2++)
		{
			printf(" | %3d|",Matriz[c][c2]);
		}
	}
	if (c>0)
		n_p++;
	else
		if (c<0)
			n_ne++;
		else
			c==0;
			n_n++;
	if (c2>0)
		n_p++;
	else
		if (c2<0)
			n_ne++;
		else
			c2==0;
			n_n++;
	printf("\nNumeros positivos: %d",n_p);
	printf("\nNumeros negativos: %d",n_ne);
	printf("\nNumeros neutros:   %d",n_n);
}
