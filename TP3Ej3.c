/*3. Se ingresa por teclado un conjunto de números uno a uno. Contar cuántas veces se presentan los valores 10, 20, 30 y 40 y cuántos números distintos a esos se presentan. 
El proceso finaliza la tercera vez que -1 es ingresado.*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main(void){

int num,num2, cont[4], contdist,contmen1,i,j;

num2=10;
contdist=0;
contmen1=0;

for(i=0; i<4;i++){
	
cont[i]=0;
}

while(contmen1!=3){

printf("Ingrese un número\n");
scanf("%d", &num);
fflush(stdin);
_clrscr();

switch(num){

case 10:
     cont[0]=cont[0]+1;
break;
case 20:
     cont[1]=cont[1]+1;
break;
case 30:
     cont[2]=cont[2]+1;
break;
case 40:
     cont[3]=cont[3]+1;
break;

default:
	contdist=contdist+1;
	if (num==-1){
			contmen1=contmen1+1;
	}
}
}
     for(j=0; j<4;j++){
	
printf("El numero %d fue ingresado %d vez/veces.\n\n",num2,cont[j]);
num2=num2+10;
_getch();
_clrscr();
}
printf("Se ingresaron %d numeros diferentes a 10,20,30 y 40.\n",contdist);
_getch();
_clrscr();
}
