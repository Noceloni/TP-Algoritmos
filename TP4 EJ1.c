/*TP4, Ejercicio 1:

Un hotel tiene 100 habitaciones de distintos comodidades, la información la manejan con el siguiente registro: 
Nro de Habitación, piso, tipo, precioXdia, confort, estado 
Se quiere realizar las siguientes operaciones: 
a) Buscar habitaciones disponibles y listar sus datos 
b) Imprimir el estado de las habitaciones, ordenadas por tipo 
c) Liquidar una habitación, ingresando la cantidad de días que estuvo ocupada */


#include <stdio.h>
#include <string.h>
#include <conio.h>

struct informacion{
    int numero, piso, tipo, confort, estado; //estado 1 ocupada, 0 vacia.
    float precio;
};

struct informacion info[3];

int main(void){

int i, res, cantidad;
float preciototal;

for(i=0;i<3;i++){
printf("Ingrese numero de la habitacion %d.\n",i);
scanf("%d", &info[i].numero);
printf("Ingrese piso de la habitacion.\n");
scanf("%d", &info[i].piso);
printf("Ingrese tipo de habitacion.(1 monoambiente, 2 dos ambientes, 3 tres ambientes).\n");
scanf("%d", &info[i].tipo);
printf("Ingrese precio por dia de la habitacion.\n");
scanf("%f", &info[i].precio);
printf("Ingrese confort de la habitacion (1 menor confort-10 mayor confort).\n");
scanf("%d", &info[i].confort);
printf("Ingrese estado de la habitacion (1 ocupada, 0 vacía).\n");
scanf("%d", &info[i].estado);
_clrscr();
}

printf("Quiere buscar habitaciones disponibles? (1 si, 2 no).\n");
scanf("%d", &res);
fflush(stdin);
_clrscr();

if(res==2){
		printf("Se le preguntara si quiere saber el estado de las habitaciones, ordenadas por tipo.\n");
		_getch();
		fflush(stdin);
		_clrscr();
	}
	else if(res==1){
		for(i=0;i<3;i++){
			if(info[i].estado==0){
				printf("Habitacion numero %d se encuentra disponible, estos son sus datos: \n", i);
				printf("Se encuentra en el piso numero %d.\n", info[i].piso);
				if(info[i].tipo==1){
					printf("La habitacion es un monoambiente.\n");
				}
				else if(info[i].tipo==2){
					printf("La habitacion es de dos ambientes.\n");
				}
                   else if(info[i].tipo==3){
					printf("La habitacion es de tres ambientes.\n");
				    } 
      printf("El confort de la habitacion del 1 al 10 es de: %d.\n", info[i].confort);
	  printf("El precio por dia de la habitacion es de: $ %f.\n", info[i].precio);
	 _getch();
	 fflush(stdin);
	 _clrscr();
	}
		}
	}

printf("Quiere imprimir el estado de las habitaciones? (1 si, 2 no).\n");
scanf("%d", &res);
fflush(stdin);
_clrscr();

if(res==2){
		printf("Se le preguntara si quiere liquidar una habitacion.\n");
		_getch();
		fflush(stdin);
		_clrscr();
}
	else if(res==1){
		for(i=0;i<3;i++){

			if(info[i].tipo==1){
			printf("Habitacion numero: %d.\n",i);
            printf("La habitacion es un monoambiente (tipo 1).\n");
		    if(info[i].estado==0){
					printf("La habitacion se encuentra desocupada.\n");
				}
				else if(info[i].estado==1){
					printf("La habitacion se encuentra ocupada.\n");
				}
				_getch();
				fflush(stdin);
				_clrscr();
				}
			
				else if(info[i].tipo==2){
				    printf("Habitacion numero: %d.\n",i);
					printf("La habitacion es de dos ambientes(tipo 2).\n");
                       if(info[i].estado==0){
					    printf("La habitacion se encuentra desocupada.\n");
				}
				            else if(info[i].estado==1){
					         printf("La habitacion se encuentra ocupada.\n");
				}
                _getch();
				fflush(stdin);
				_clrscr();
				}
                   else if(info[i].tipo==3){
				    printf("Habitacion numero: %d.\n",i);
					printf("La habitacion es de tres ambientes(tipo 3).\n");
				     
                       if(info[i].estado==0){
					     printf("La habitacion se encuentra desocupada.\n");
				          }
				          else if(info[i].estado==1){
					       printf("La habitacion se encuentra ocupada.\n");
				       }
                _getch();
				fflush(stdin);
				_clrscr();
			     }
		  }
	}

printf("Quiere liquidar una habitacion? (1 si, 2 no).\n");
scanf("%d", &res);
fflush(stdin);
_clrscr();

if(res==2){
		printf("Saliendo del programa...\n");
		_getch();
		fflush(stdin);
		_clrscr();
	}
	else if(res==1){

	printf("Ingrese numero de la habitacion a liquidar.\n");
	scanf("%d", &res);
		for(i=0;i<3;i++){
		if(info[i].numero==res){
				if(info[i].estado==0){
					while((info[i].numero==res)&&(info[i].estado==0)){
					printf("Esta habitacion esta desocupada, no se puede cobrar, elija otra.\n");
					scanf("%d", &res);
					_clrscr();
				}
				}
				else if(info[i].estado==1){
					printf("Ingrese cantidad de dias que estuvo ocupada.\n");
					scanf("%d", &cantidad);
					preciototal=cantidad*info[i].precio;
					_clrscr();
printf("Ticket de liquidacion:\n");
printf("Habitacion numero %d, que se encuentra en el piso %d.\n", info[i].numero, info[i].piso);
if(info[i].tipo==1){
					printf("Tipo de habitacion: monoambiente.\n");
				}
				else if(info[i].tipo==2){
					printf("Tipo de habitacion: dos ambientes.\n");
				}
                   else if(info[i].tipo==3){
					printf("Tipo de habitacion: tres ambientes.\n");
				    } 
printf("El precio por dia es de: %f.\n", info[i].precio);
printf("Cantidad de dias ocupada: %d.\n", cantidad);
printf("Precio total pagado: %f.\n", preciototal);
_getch();
_clrscr();
				}
			}
		}
	}




	return 0;
}


			


