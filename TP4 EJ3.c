/*TP4 Ejercicio 3:
Se cargan 2 matrices con n�meros reales para realizar las siguientes operaciones: 
a) Cargar en un vector la suma de cada columna de la primera matriz. 
b) Cargar un vector con el promedio de cada fila de la segunda matriz. 
c) Calcular el promedio de los valores de ambas matrices.*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main(void){

float mat1[3][2], mat2[3][2], vec1[2], vec2[3], prom;
int i,j;

prom=0;

for(i=0; i<3; i++){
	for(j=0; j<2; j++){

	printf("Ingrese un valor para la posici�n %d %d de la matriz 1: ",i,j);
	scanf("%f", &mat1[i][j]);
	_clrscr();

    printf("Ingrese un valor para la posici�n %d %d de la matriz 2: ",i,j);
	scanf("%f", &mat2[i][j]);
	_clrscr();
    vec1[j]=0;
	vec2[i]=0;

		}
	}


    for(i=0; i<3; i++){
	  for(j=0; j<2; j++){
	   vec1[j]=mat1[0][j]+mat1[1][j]+mat1[2][j];
	   vec2[i]=(mat2[i][0]+mat2[i][1])/2;
	   prom=prom+(mat1[i][j]+mat2[i][j]);
		}
	}
 prom=prom/12;

	for(j=0; j<2; j++){
    printf("La suma de la columna %d de la matriz 1 es: %f.",j,vec1[j]);
	_getch();
	_clrscr();
		}
for(i=0; i<3; i++){
    printf("El promedio de la fila %d de la matriz 2 es: %f.",i,vec2[i]);
	_getch();
	_clrscr();
		}
	

printf("El promedio de las matrices es: %f .\n",prom);
		_getch();
		_clrscr();

	return 0;
}
