/*12. Una empresa fabrica productos que se comercializan en dos calidades: Primera y Segunda. Los productos que no caen en ninguna de esas categorías se consideran de Descarte. 
El control de calidad se lleva a cabo antes de empacar los productos terminados. La gerencia de la empresa solicita un informe impreso en el que se detalle porcentualmente el
rendimiento de la producción a lo largo de cierto período de tiempo.*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main(void){

int res,calidad, cont[3],i,j, conta;
float porc[3];

conta=0;
for(i=0; i<4;i++){
	cont[i]=0;
}
printf("===============================\n");
printf("Control mensual.\n");
printf("Hay producto que registrar? 1=si 2=no\n");
scanf("%d", &res);
_clrscr();

if(res==1){

while(res==1){

	printf("Ingrese la calidad del producto.\n");
	printf("Primera calidad=1, segunda calidad=2\n");
scanf("%d", &calidad);
_clrscr();
	switch(calidad){
	case 1:
		cont[0]=cont[0]+1;
		conta=conta+1;
	break;
	case 2:
		cont[1]=cont[1]+1;
		conta=conta+1;
	break;
	default:
		cont[2]=cont[2]+1;
		conta=conta+1;
	break;
}

printf("Hay producto que registrar? 1=si 2=no\n");
scanf("%d", &res);
_clrscr();
}
for(i=0;i<5; i++){
	
porc[i]=cont[i]*100/conta;
}

printf("El porcentaje de productos de primera calidad es de: %f %%.\n\n", porc[0]);
printf("El porcentaje de productos de segunda calidad es de: %f %%.\n\n", porc[1]);
printf("El porcentaje de productos de descarte es de: %f %%.\n\n", porc[2]);
_getch();
_clrscr();

return 0;
}
else if(res==2){
	printf("Saliendo del programa...\n");
	_getch();
	_clrscr();
}
}
