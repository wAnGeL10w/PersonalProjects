/*Programa Apoyo Arreglos*/
#include <stdio.h>
main()
{
	//Declaracion de Variables
	int i, myArray[5]={81,98,62,100,75};
	int suma=0, prom;
	//Sentencia FOR
	for (i=0; i<=4; i++)
	{
		printf("\n%d - %d",i,myArray[i]);
		suma+=myArray[i];
	}
	//Proceso
	prom=suma/5;
	//Impresion a Pantalla
	printf("\nLa suma es %d",suma);
	printf("\nEl promedio es %d",prom);
}
