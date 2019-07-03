/*Ejercicio clase 19/6:

En una ferretería se comercializan 100 productos diferentes, con código de 1 a 100. De los mismos se tiene el stock y el precio.
Se requiere desarrollar un programa que simule la venta del día, verificando si existe stock para cada venta, y se guarde la recaudación
por producto.

Al finalizar el día se desea:

a. Imprimir código e importe de venta de cada producto
b. Venta total del día
c. Listado de todos los productos con stock 0 para su reposición. */

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main (void){

int precio[3], stock[3], recaudacion[3],i,cantidad,resp,ganancia, ventatotal;
ventatotal=0;

//carga inicial

for(i=0; i<3;i++){
	recaudacion[i]=0;

	printf("Ingrese stock del producto de codigo %d:\n", i);
	scanf("%d", &stock[i]);
	fflush(stdin);
    printf("Ingrese precio del producto de codigo %d:\n", i);
	scanf("%d", &precio[i]);
	fflush(stdin);
	_clrscr();
			}


printf("Hay venta para hacer? 1=si, 2=no.\n");
scanf("%d", &resp);
fflush(stdin);
_clrscr();

while((resp!=1)&&(resp!=2)){
		printf("Opcion incorrecta.\n");
	_getch();
    _clrscr();
	printf("Hay venta para hacer? 1=si, 2=no.\n");
     scanf("%d", &resp);
     fflush(stdin);
     _clrscr();
	}

while(resp==1){
     printf("Ingrese código del producto a vender:");
	 scanf("%d", &i);
	 _clrscr();
	 fflush(stdin);
		while((i<0)||(i>2)){
				printf("Codigo incorrecto.\n");
			    _getch();
			    _clrscr();
      printf("Ingrese código del producto a vender:");
	  scanf("%d", &i);
     _clrscr();
	 fflush(stdin);
			}
     if(stock[i]==0){
		printf("No hay stock disponible.\n");
		_getch();
		_clrscr();
		}
	 else{
	printf("Ingrese cantidad de productos a vender:");
	scanf("%d", &cantidad);
			if(cantidad>stock[i]){
		 printf("No hay stock disponible.\n");
		_getch();
		_clrscr();}
			else{
    ganancia=precio[i]*cantidad;
	printf("Venta realizada con exito.\n");
	printf("Ganancia por la venta: %d.\n", ganancia);
	_getch();
	_clrscr();
     ventatotal=ventatotal+ganancia;
	stock[i]=stock[i]-1;
    recaudacion[i]=recaudacion[i]+ganancia;
		}
 printf("Hay otra venta para hacer? 1=si, 2=no.\n");
 scanf("%d", &resp);
 fflush(stdin);
 _clrscr(); 
	}
}


printf("Fin del dia.\n\n");
_getch();
_clrscr();
for(i=0; i<3;i++){
printf("Precio de venta de codigo %d: %d", i, precio[i]);
_getch();
_clrscr();
printf("Ganancia del producto de codigo %d: %d", i, recaudacion[i]);
_getch();
_clrscr();
}

for(i=0; i<3;i++){
	if(stock[i]==0){
printf("Producto de código %d tiene stock 0.\n",i);
_getch();
_clrscr(); 
}
}

printf("Ganancia total del dia: $ %i", ventatotal);
_getch();
_clrscr();
}
