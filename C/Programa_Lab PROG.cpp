/*Programa laboratorio PROGRAMACION*/
#include <stdio.h>
#include <stdlib.h>
#define IVA 0.16
#define CAM 357.49
#define PNT 418.95
#define R_INT 139.99
#define CALC 84.75
#define ZAP 1150.89
void E_opc();
int resp, punt=0, t_punt=0;
main()
{
	//Declaracion de variables
	int client, opcion, cant, cam=0, pnt=0, r_int=0, calc=0, zap=0, seguir, seguir2;
	float efect, camb, t_cam, t_pnt, tr_int, t_calc, t_zap, subt, tot, iva, tot_v, v_totC;
	float vt_cam, vt_pnt, vt_rint, vt_calc, vt_zap; 
	//Lectura de Datos
	do
	{
		client++;
		punt=0;
		t_punt=0;
		cam=0; pnt=0; r_int=0; calc=0; zap=0;
		do
		{
			system("cls");
			printf("Cliente %d Bienvenido a Live to wear\n",client);
			printf("Teclee el numero de la opcion que desee comprar\n");
			printf("1-Camisa..........$357.49\n");
			printf("2-Pantalon........$418.95\n");
			printf("3-Ropa interior...$139.99\n");
			printf("4-Calcetines.......$84.75\n");
			printf("5-Zapatos........$1150.89\n");
			scanf("%d",&opcion);
			printf("Teclee la cantidad: ");
			scanf("%d",&cant);
			switch(opcion)
		{
			case 1: cam+=cant;     break;
			case 2: pnt+=cant;     break;
			case 3: r_int+=cant;;  break;
			case 4: calc+=cant;    break;
			case 5: zap+=cant;      break;
			default: printf("Opcion invalida"); break;
		}
		printf("\nSi desea seguir comprando teclee 1: ");
		scanf("%d",&seguir);
		}while(seguir==1);
		printf("\nTeclee su efectivo: ");
		scanf("%f",&efect);
		system("cls");
		//Operaciones
		///Calcetines
		t_cam=cam*CAM;
		vt_cam+=t_cam;
		///Pantalones
		t_pnt=pnt*PNT;
		vt_pnt+=t_pnt;
		///Ropa interior
		tr_int=r_int*R_INT;
		vt_rint+=tr_int;
		///Calcetines
		t_calc=calc*CALC;
		vt_calc+=t_calc;
		///Zapatos
		t_zap=zap*ZAP;
		vt_zap+=t_zap;
		///Otros calculos
		subt=(t_cam)+(t_pnt)+(tr_int)+(t_calc)+(t_zap);
		v_totC+=subt;
		iva=subt*IVA;
		tot=subt+iva;
		tot_v+=tot;
		camb=efect-tot;
		//Impresion a pantalla
	    //////////////////TICKET DE COMPRA////////////////
		printf("            Live to wear             \n");
		printf("          TICKET DE COMPRA           \n");
		printf("Adolfo, Av. Ruiz Cortines 5698, Valle\n");
		printf(" de Infonavit, 64350 Monterrey, N.L. \n");
		printf("         Tel. +52 814 860 134        \n");
		printf("Fecha: "); system("date/t "); printf("Hora:  "); system(" time/t\n");
		printf("--------------------------------------\n");
		printf("  Productos   Cantidad    Total      \n");
		printf("Camisas          %d        %f\n",cam,t_cam);
		printf("Pantalones       %d        %f\n",pnt,t_pnt);
		printf("Ropa interior    %d        %f\n",r_int,tr_int);
		printf("Calcetines       %d        %f\n",calc,t_calc);
		printf("Zapatos          %d        %f\n",zap,t_zap);
		printf("\n");
		printf("                          ------------\n");
		printf("TOTAL                      %f\n",tot);
		printf("\nEfectivo                   %f\n",efect);
		printf("Cambio efectivo            %f\n",camb);
		printf("\n");
		printf("SUBTOTAL                   %f\n",subt);
		printf("Iva al 16                  %f\n",iva);
		printf("TOTAL                      %f\n",tot);
		printf("**** I.V.A. INCLUIDO EN EL PRECIO ****\n");
		printf("******   GRACIAS POR SU VISITA   *****\n");
		printf("   ||| || ||||| | |||| |||| || | |||  \n");
		printf("             280817928371087          \n");
		system("pause");
		system("cls");
		//Encuesta
		printf("A continuacion se le apliara una encuesta de satisfaccion al cliente\n");
		printf("¿Como fue tu experiencia en nuestra tienda?\n");
		E_opc(); t_punt+=punt;
		printf("\n");
		printf("¿Que tan satisfecho(a) esta con su(s) productos?\n");
		E_opc(); t_punt+=punt;
		printf("\n");
		printf("¿Como califica la conducta de nuestros empleados?\n");
		E_opc(); t_punt+=punt;
		printf("\n");
		printf("¿Como califica nuestras instalaciones?\n");
		E_opc(); t_punt+=punt;
		printf("\n");
		printf("¿Que reseña le daria a un conocido sobre nuestra tienda?\n");
		E_opc(); t_punt+=punt;
		printf("\n");
		system("cls");
		printf("Su porcentaje de satisfaccion es: %d\n",t_punt*4);
		printf("\nTeclee 1 para que siga la siguiente persona: ");
		scanf("%d",&seguir2);
	}while(seguir2==1);
	printf("Clientes atendidos:          %d\n",client);
	printf("Total de lo vendido:         %f\n",tot_v);
	printf("Ventas totales por cliente:  %f\n",v_totC);
	printf("VENTAS TOTALES POR PRODUCTO\n");
	printf("Ventas Camisa                %f\n",vt_cam);
	printf("Ventas Pantalon              %f\n",vt_pnt);
	printf("Ventas Ropa interior         %f\n",vt_rint);
	printf("Ventas Calcetines            %f\n",vt_calc);
	printf("Ventas Zapatos               %f\n",vt_zap);
}
void E_opc()
{
	printf("1) Muy bien\n");
	printf("2) Bien\n");
	printf("3) Masomenos\n");
	printf("4) Mal\n");
	printf("5) Muy mal\n");
	printf("\nEscriba su respuesta: ");
	scanf("%d",&resp);
	switch(resp)
	{
		case 1: punt=5; break;
		case 2: punt=4; break;
		case 3: punt=3; break;
		case 4: punt=2; break;
		case 5: punt=1; break;
	}
}
