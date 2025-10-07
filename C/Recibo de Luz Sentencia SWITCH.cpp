/*Progrma Rebibo de Luz Sentencia SWITCH*/
#include <stdio.h>
#define Z1 0.793
#define Z2 0.956
#define Z3 1.025
#define Z4 2.802
main()
{
	//Declaracion de Variables
	int zona;
	float consumo, total;
	//Lectura de Datos
	printf("Seleccione la zona en la cual vive\n");
	printf("1.-Escobedo\n");
	printf("2.-Monterrey\n");
	printf("3.-Apodaca\n");
	printf("4.-San Pedro\n");
	printf("En cual de estas zonas vive?\n ");           scanf("%d",&zona);
	printf("Teclee la cantidad consumida: ");          scanf("%f",&consumo);
	//Sentencia SWITCH
	switch (zona)
	{
		case 1:
			total=Z1*consumo;
			printf("El consumo total es de %f pesos",total);
		break;
		case 2:
			total=Z2*consumo;
			printf("El consumo total es de %f pesos",total);
		break;
		case 3:
			total=Z3*consumo;
			printf("El consumo total es de %f pesos",total);
		break;
		case 4:
			total=Z4*consumo;
			printf("El consumo total es de %f pesos",total);
		break;
		default:
			printf("Zona invalida");
		break;	
	}
	return 0;
}
