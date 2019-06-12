/*TP2 EJERCICIO 4:

Un empleado de banco tiene un sistema que imprime un ticket cada vez que un cliente realiza una compra de d�lares. 
La operaci�n tiene una comisi�n administrativa seg�n la cantidad de d�lares que se venden, lo que representa un sobre costo para el cliente:
a. 2% si es m�s de 501 y menos de 1501
b. 2,5% si es mayor de 1501 y menos que 3501
c. 4 % si es mayor a 3501
El ticket muestra discriminados: la cantidad de d�lares que se compraron, el valor de cada d�lar,
el monto de la comisi�n y el monto total que el cliente debe abonar por la compra.
Hacer un programa que simule la compra e imprima el ticket.*/

#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(void){

int cantidad;
float comision, pesos, precio, preciofinal;

printf("Ingrese valor actualizado del dolar:\n");
scanf("%f", &precio);

printf("Ingrese cantidad de dolares a comprar:\n");
scanf("%d", &cantidad);
_clrscr();
comision=0;
pesos=cantidad*precio;

if((cantidad>501)&&(cantidad<1501)){
		comision=pesos*0.02;
	}
		else if((cantidad>1500)&&(cantidad<3501)){
		comision=pesos*0.025;
	}
		else if(cantidad>3500){
	
	comision=pesos*0.04;}

preciofinal=pesos+comision;

printf("====================================\n");
printf("Ticket de compra de dolares:\n\n");
printf("Cantidad de dolares comprados: %d.\n\n", cantidad);
printf("Valor del dolar: %f.\n\n", precio);
printf("Comisi�n: %f.\n\n", comision);
printf("Precio total por la compra: %f.\n\n", preciofinal);
printf("====================================\n");
_getch();
_clrscr();

return 0;
}
