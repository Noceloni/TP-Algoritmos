//TP1 EJERCICIO 1

#include <stdio.h>
#include <string.h>
#include <conio.h>

void ingresardatos (char nomyape[100], float *sueldob, int *premio, int *comida, int *viaticos, int *ausentes, float *obrasocial, float *ley, float *jubilacion, int *aus, float *sueldot);

void imprimirdatos (char nomyape[100], float *sueldob, int *premio, int *comida, int *viaticos, int *ausentes, float *obrasocial, float *ley, float *jubilacion, int *aus, float *sueldot);

int main(void){

char nomyape[100];
int premio, comida, viaticos, ausentes, aus, res;
float sueldob,sueldot, ley, jubilacion, obrasocial;

res=9;
while(res!=0){

printf("Elija una opcion.\n");

printf("1. Ingresar datos.\n");
printf("2. Imprimir datos.\n");
printf("0. Salir.\n");
printf("\n Opcion elegida:");
scanf("%d", &res);
_clrscr();

switch(res){
		
case 1: 
				ingresardatos (&nomyape[100],&sueldob,&premio,&comida,&viaticos,&ausentes, &obrasocial,&ley, &jubilacion,&aus,&sueldot);
break;
		
case 2:
                imprimirdatos (&nomyape[100],&sueldob,&premio,&comida,&viaticos,&ausentes, &obrasocial,&ley, &jubilacion,&aus,&sueldot);
		break;
case 0: 
				printf("Saliendo...\n");
			    _getch();
			    _clrscr();
				break;

default:

				printf("Opcion incorrecta.\n");
				_getch();
				_clrscr();
		break;
		
		}

}
	return 0;

}


void ingresardatos(char nomyapes[100], float *sueldobb, int *premios, int *comidas, int *viaticoss, int *ausentess, float *obrasociall, float *leyy, float *jubilacionn, int *auss, float *sueldott) {

printf("ingrese nombre y apellido:\n");
scanf("%s", nomyapes);
fflush(stdin);
printf("ingrese sueldo basico:\n");
scanf("%f",sueldobb);
fflush(stdin);
printf("ingrese premio:\n");
scanf("%d",premios);
fflush(stdin);
printf("ingrese comida:\n");
scanf("%d", comidas);
fflush(stdin);
printf("ingrese viaticos:\n");
scanf("%d", viaticoss);
fflush(stdin);
printf("ingrese cantidad de dias ausentes:\n");
scanf("%d", ausentess);
fflush(stdin);
_clrscr();

*obrasociall=*sueldobb*0.03;
*leyy=*sueldobb*0.03;
*jubilacionn=*sueldobb*0.11;
*auss=*ausentess*100;
*sueldott=*sueldobb+*premios+*comidas+*viaticoss-*auss-*obrasociall-*leyy-*jubilacionn;

}

void imprimirdatos (char nomyapes[100], float *sueldobb, int *premios, int *comidas, int *viaticoss, int *ausentess, float *obrasociall, float *leyy, float *jubilacionn, int *auss, float *sueldott){

printf("Recibo de sueldo:\n");
printf("Nombre y apellido: %s.\n", nomyapes);
printf("Sueldo basico: %f.\n", *sueldobb);
printf("Premio: %d.\n", *premios);
printf("Comida: %d.\n", *comidas);
printf("Viaticos: %d.\n", *viaticoss);
printf("Dias ausentes %d. Descuento por dias ausentes: %d.\n", *ausentess, *auss);
printf("Obra social: %f.\n", *obrasociall);
printf("Ley 19032:%f.\n", *leyy);
printf("Jubilación: %f.\n\n", *jubilacionn);
printf("Sueldo total: %f.\n", *sueldott);
_getch();
_clrscr();
}
