/*TP4 ejercicio 2:
2. Se desea cargar 2 matrices con números enteros y hacer las siguientes operaciones:
a) Multiplicar los valores de las dos matrices.
b) Sumar posición por posición de las dos matrices y colocarlos en un matriz resultado.
c) Comparar posición por posición los valores de las dos matrices y colocar en un matriz resultado el menor de ellos, en la misma posición.*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main(void){

int mat1[3][2], mat2[3][2], matres1[3][2],matres2[3][2], valmut, i, j; //matres1= matriz de resultados suma,matres2=matriz de resultados de comparacion valmut=valor multiplicacion;

for(i=0; i<3; i++){
	for(j=0; j<2; j++){

	printf("Ingrese un valor para la posición %d %d de la matriz 1: ",i,j);
	scanf("%d", &mat1[i][j]);
	_clrscr();

    printf("Ingrese un valor para la posición %d %d de la matriz 2: ",i,j);
	scanf("%d", &mat2[i][j]);
	_clrscr();


		}
	}

for(i=0; i<3; i++){
	for(j=0; j<2; j++){
		valmut=mat1[i][j]*mat2[i][j];
        printf("El resultado de la multiplicación de la posición %d %d de la matriz 1 por la posición %d %d de la matriz 2 es: %d.\n",i,j,i,j,valmut);
		_getch();
		_clrscr();

		matres1[i][j]=mat1[i][j]+mat2[i][j];

		if(mat1[i][j]<mat2[i][j]){
				matres2[i][j]=mat1[i][j];
       printf("En la posición %d %d de ambas matrices el menor numero es: %d",i,j,matres2[i][j]);
	  _getch();
	  _clrscr();
			}
			else if(mat1[i][j]>mat2[i][j]){
			matres2[i][j]=mat2[i][j];
       printf("En la posición %d %d de ambas matrices el menor numero es: %d",i,j,matres2[i][j]);
	  _getch();
	   _clrscr();
			}
			else{
			printf("En la posición %d %d de ambas matrices los numeros son iguales.\n",i,j);
			_getch();
			_clrscr();
			}

}
	}  

for(i=0; i<3; i++){
	for(j=0; j<2; j++){
    printf("La suma de la posición %d %d de ambas matrices es: %d",i,j,matres1[i][j]);
	_getch();
	_clrscr();
		}
	}

	return 0;

}
