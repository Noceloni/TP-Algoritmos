/*Una fabrica industrial desea digitalizar sus ventas, en la cual fabrica y vende bulones. La misma produce 10
tipos de bulones, y se tiene de cada uno el código, nombre, stock y precio unitario de venta. Al comenzar el día se hace 
la carga inicial de stock de cada tipo de bulón, para luego realizar las ventas de stock disponible hasta concluir
el día. El día se divide en dos turnos
Se desea realizar:
1. Por cada venta imprimir el ticket con: nombre bulon, precio unitario, cantidad vendida, monto total de la venta.
2. Al finalizar el día informar total vendido y total recaudado por tipo de bulón.
3. Informar por cada turno el total vendido y el total recaudado por tipo de bulón.

Aclaracion: en vez de acumular la cantidad de unidades de cada bulon vendidas, acumulé la cantidad de plata por cada bulón. */

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

struct bulones{

int codigo, stock;
char nombre[20];
float precio,totalrecaudadoturno[2];
};

struct bulones b[2];

int main(void){

int i,j, resp, cod, cant;
float totalventa[2], totalvendidoturno[2], totalvendido,totalrecaudado[2];

for(i=0;i<2;i++){

printf("Ingresar nombre de bulon %d.\n",i);
scanf("%s", b[i].nombre);
printf("Ingresar codigo de bulon %d.\n",i);
scanf("%d", &b[i].codigo);
printf("Ingresar stock de bulon %d.\n",i);
scanf("%d", &b[i].stock);
printf("Ingresar precio unitario de venta de bulon %d.\n",i);
scanf("%f", &b[i].precio);
totalventa[i]=0;
totalvendidoturno[i]=0;
b[i].totalrecaudadoturno[i]=0;
totalvendido=0;
totalrecaudado[i]=0;
_clrscr();
fflush(stdin);
}

for(j=0;j<2;j++){

     printf("Hay venta para hacer en el turno %d? 1=si, 2=no.\n",j);
     scanf("%d", &resp);
	 _clrscr();
	 fflush(stdin);
while((resp!=1)&&(resp!=2)){
		printf("Opcion equivocada.\n");
      printf("Hay venta para hacer en el turno %d? 1=si, 2=no.\n",j);
     scanf("%d", &resp);
	 _clrscr();
	 fflush(stdin);
		}
if(resp==1){
			while(resp==1){
        
        printf("Ingresar codigo de bulon.\n");
        scanf("%d", &cod);
		fflush(stdin);

        i=0;
        while(cod!=b[i].codigo){
            i=i+1;
			if(i>1){
					printf("Opcion equivocada.\n");
                    printf("Ingresar codigo de bulon.\n");
                    scanf("%d", &cod);
					_clrscr();
		            fflush(stdin);
					
					}
        }
printf("Ingresar cantidad a vender.\n");
scanf("%d", &cant);
fflush(stdin);
if((b[i].stock<cant)&&(b[i].stock>0)){
    printf("Stock insuficiente.\n");
    fflush(stdin);
    _clrscr();

}
else if((b[i].stock>=cant)&&(b[i].stock>0)){
b[i].stock=b[i].stock-cant;
totalventa[j]=cant*b[i].precio;
totalvendidoturno[j]=totalvendidoturno[j]+totalventa[j];
b[i].totalrecaudadoturno[j]=b[i].totalrecaudadoturno[j]+totalventa[j];

    printf("Venta realizada.\n");
    printf("Nombre de bulon: %s.\n", b[i].nombre);
    printf("Precio unitario de bulon: %f.\n", b[i].precio);
    printf("cantidad vendida: %d.\n", cant);
    printf("Monto total de venta: %f\n", totalventa[j]);
	_getch();
	_clrscr();
    
}
	else{
		printf("No hay mas stock de este bulon, por favor elija otro.\n");
		_getch();
		_clrscr();
			}

 printf("Hay otra venta para hacer en el turno %d? 1=si, 2=no.\n",j);
     scanf("%d", &resp);
	 _clrscr();
	 fflush(stdin);
    while((resp!=1)&&(resp!=2)){
		printf("Opcion equivocada.\n");
      printf("Hay venta para hacer en el turno %d? 1=si, 2=no.\n",j);
     scanf("%d", &resp);
	 _clrscr();
	 fflush(stdin);
		}
		if((resp==2)&&(j<1)){
			printf("Cambio de turno.\n");
			_getch();
			_clrscr();
     }
				else if((resp==2)&&(j>=1)){
					printf("Fin del dia.\n");
					_getch();
					_clrscr();
				}
			}
		
		
		}
		else if((resp==2)&&(j<1)){
			printf("Cambio de turno.\n");
			_getch();
			_clrscr();
     }



		else if((resp==2)&&(j<1)){
			printf("Cambio de turno.\n");
			_getch();
			_clrscr();
     }
        else if((resp==2)&&(j>=1)){
					printf("Fin del dia.\n");
					_getch();
					_clrscr();
				}

	
		

for(i=0;i<2;i++){
printf("El total recaudado del bulon %d en este turno fue de %f.\n",i,b[i].totalrecaudadoturno[j]);
_getch();
_clrscr();
}
printf("El total vendido en este turno fue de %f.\n",totalvendidoturno[j]);
_getch();
_clrscr();
	}
for(j=0;j<2;j++){
		totalvendido=totalvendido+totalvendidoturno[j];
		for(i=0;i<2;i++){
        totalrecaudado[j]=totalrecaudado[j]+b[j].totalrecaudadoturno[i];
		}

printf("El total recaudado del bulon %d en ambos turnos fue de: $%f.\n",j,totalrecaudado[j]);
_getch();
_clrscr();
}

printf("El total vendido en ambos turnos fue de: $%f.\n",totalvendido);
_getch();
_clrscr();

	return 0;
}
