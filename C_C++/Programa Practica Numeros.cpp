/*Programa Sentencia FOR*/
#include <stdio.h>
main()
{
	//Declaracion de Variables
	int mig, resp, edad, est_c, dep_eco, acep=0, rech=0;
	//Sentencia FOR
	for (mig=0; mig<=6; mig++)
	{
		printf("Es extranjero?\n");
		printf("1-Si\n");
		printf("2-No\n");
		scanf("%d",&resp);
		printf("Cual es su edad\n");
		scanf("%d",&edad);
		printf("Cual es su estado civil?\n");
		printf("1-Soltero\n");
		printf("2-Casado\n");
		printf("3-Viudo\n");
		printf("Su opcion?: ");
		scanf("%d",&est_c);
		printf("Tiene dependientes economicos?\n");
		printf("1-Si\n");
		printf("2-No\n");
		scanf("%d",&dep_eco);
		if (resp==1 && edad<=40 && est_c==1 && dep_eco==2)
			acep++;
		else
			rech++;
	}
	//Impresion a pantalla
	printf("\nMigrantes aceptados.........%d",acep);
	printf("\nMigrantes no aceptados......%d",rech);
}
	//if (resp==2 && edad<=41 && est_c==2 || est_c==3 && dep_eco==1)
