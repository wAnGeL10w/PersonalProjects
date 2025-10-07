/*Programa Apoyo Arreglos-Matriz*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	//Declaracion de Variables
	int r,c,Matriz[3][2];
	float suma=0,prom;
	//Sentencia FOR
	for (r=0; r<=2; r++)
	{
		for(c=0; c<=1; c++)
		{
			printf("Elemento %d,%d: ",r,c);
			scanf("%d",&Matriz[r][c]);
		}
	}
	system("cls");
	for (r=0; r<=2; r++)
	{
		printf("\n");
		for (c=0; c<=1; c++)
		{
			printf(" | %3d|",Matriz[r][c]);
			suma+=Matriz[r][c];
		}
	}
	//Proceso
	prom=suma/5;
	//Impresion a Pantalla
	printf("\nLa suma es %d",suma);
	printf("\nEl promedio es %d",prom);
}

