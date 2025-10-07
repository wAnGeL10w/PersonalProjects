/*Programa Casa de Cambio*/
#include <stdio.h>
#include <stdlib.h>
#define USD 19.44 //Dolar Estadounidense
#define EUR 20.11 //Euro
#define JPY 0.014 //Yen Japonés
#define GBP 23.13 //Libra esterlina
#define AUD 12.98 //Dolar Auatraliano 
main()
{
	//Declaración de Variables
	int  opcion, seguir, usd=0, eur=0, jpy=0, gbp=0, aud=0;
	float cantidad, tot_usd, tot_eur, tot_jpy, tot_gbp, tot_aud, c_usd, c_eur, c_jpy, c_gbp, c_aud;
	//Sentencia Do
	do
	{
		system("cls");
		printf("Seleccione el tipo de divisa al que desee cambiar\n");
		printf("1-Dolar Estadounidense........19.44\n");
		printf("2-Euro........................20.11\n");
		printf("3-Yen Japone..................0.014\n");
		printf("4-Libra Esterlina.............23.13\n");
		printf("5-Dolar Australiano...........12.98\n");
		printf("Elija su opcion: ");
		scanf("%d",&opcion);
		printf("Teclee la cantidad a cambiar: ");
		scanf("%f",&cantidad);
		switch (opcion)
		{
			case 1: usd++; c_usd+=cantidad; break;
			case 2: eur++; c_eur+=cantidad; break;
			case 3: jpy++; c_jpy+=cantidad; break;
			case 4: gbp++; c_gbp+=cantidad; break;
			case 5: aud++; c_aud+=cantidad; break;
			default: printf("\nOpción invalida");
		}
		cantidad++;
		printf("Teclee 1 para contuinuar...");
		scanf("%d",&seguir);
	}while (seguir==1);
	tot_usd=c_usd/USD;
	tot_eur=c_eur/EUR;
	tot_jpy=c_jpy/JPY;
	tot_gbp=c_gbp/GBP;
	tot_aud=c_aud/AUD;
	printf("\nDolares USA cambiados...........%d",usd);
	printf("\nEuros cambiados.................%d",eur);
	printf("\nYenes cambiados.................%d",jpy);
	printf("\nLibras cambiados................%d",gbp);
	printf("\nDolares AUD cambiados...........%d",aud);
	printf("\nCantidad en Dolar USA...........%f",tot_usd);
	printf("\nCantidad en Euro................%f",tot_eur);
	printf("\nCantidad en Yenes...............%f",tot_jpy);
	printf("\nCantidad en Libras..............%f",tot_gbp);
	printf("\nCantidad en Dolar AUD...........%f",tot_aud);
}
