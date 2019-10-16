/*
1)Agregar producto
2)Ver precio del producto
3)Modificar precio producto
4)Eliminar producto
5)Lista de productos sin stock
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct producto{

int codigo, precio,stock;

};

struct lista{

struct producto pro;
struct lista *ps;

};

struct producto p;
struct lista *l;

void inicializarlista(struct lista **l);
void agregar(struct producto *p);
void insertar(struct lista **l, struct producto p);
void verprecio(struct lista *l);
void modificar(struct lista **l);
void eliminar(struct lista **l);
void sinstock(struct lista *l);

int main(void){

int res;
res=9;
inicializarlista(&l);

while(res!=0){

printf("Menu de opciones.\n");
printf("1.Agregar producto.\n");
printf("2.Insertar producto.\n");
printf("3.Ver precio del producto.\n");
printf("4.Modificar precio del producto.\n");
printf("5.Eliminar producto.\n");
printf("6.Ver productos sin stock.\n");
printf("0.Salir.\n");
printf("Elija una opcion: ");
scanf("%d",&res);
fflush(stdin);
_clrscr();

switch (res){
	
case 1:

agregar(&p);

break;	

case 2:

insertar(&l, p);

break;

case 3:

verprecio(l);

break;

case 4:

modificar(&l);

break;
				
case 5:

eliminar(&l);

break;

case 6:

sinstock(l);

break;

case 0:

printf("Saliendo del programa...\n");
_getch();
_clrscr();

break;

default:

break;				
	}
}



}

//Inicializar lista

void inicializarlista(struct lista **l){

*l=0;

}

//Agregar producto

void agregar(struct producto *p){

printf("Ingrese codigo del producto.\n");
scanf("%d", &p->codigo);
printf("Ingrese precio del producto.\n");
scanf("%d", &p->precio);
printf("Ingrese stock del producto.\n");
scanf("%d", &p->stock);
_clrscr();

}

//Insertar ordenado

void insertar(struct lista **l, struct producto p){

struct lista *act;
struct lista *ant;
struct lista *nuevo=malloc(sizeof(struct lista));

nuevo->pro.codigo= p.codigo;
nuevo->pro.precio= p.precio;
nuevo->pro.stock= p.stock;
nuevo->ps=0;

if(*l==0){
	*l=nuevo;
	}
	else{
	ant=0;
	act=*l;
	while((act!=0)&&(act->pro.codigo!=nuevo->pro.codigo)){
	ant=act;
	act=act->ps;
	}
	if(ant==0){
	nuevo->ps=act;
    *l=nuevo;
     }
     else{
	 nuevo->ps=act;
     ant->ps=nuevo;	
		
	}	
}

}

//Ver precio

void verprecio(struct lista *l){

int cod;

if(l==0){
	printf("La lista esta vacia.\n");
	_getch();
	_clrscr();
	}
	else{
	printf("Ingrese codigo del producto que quiere ver el precio.\n");
	scanf("%d", &cod);
	fflush(stdin);
	_clrscr();

	while ((l!=0)&&(l->pro.codigo!=cod)){
	l=l->ps;
	}
     if(l==0){
		printf("No existe producto con ese codigo.\n");
	    _getch();
		_clrscr();
		}
	else{
	printf("El precio del producto con codigo %d es: $%d.\n",cod,l->pro.precio);
    _getch();
    _clrscr();	
		}

}
}

//Modificar precio

void modificar(struct lista **l){

int cod;
struct lista *act;
struct producto p;

act=*l;

if(*l==0){
	printf("La lista esta vacia.\n");
	_getch();
	_clrscr();
	}
	else{
	printf("Ingrese codigo del producto que quiere modificar.\n");
	scanf("%d", &cod);
	_clrscr();
	while((act!=0)&&(act->pro.codigo!=cod)){
		act=act->ps;
		}
	if(act==0){
		printf("No existe producto con ese codigo.\n");
		_getch();
		_clrscr();

		}
	else{
		
	printf("Ingrese nuevo precio del producto.\n");
	scanf("%d", &p.precio);
	_clrscr();
	act->pro.precio=p.precio;
		}
	}

}

//Eliminar producto

void eliminar(struct lista **l){

struct lista *act;
struct lista *ant;
int cod;

if(*l==0){
	printf("La lista esta vacia.\n");
	_getch();
	_clrscr();
	}
else{
	
	ant=0;
	act=*l;
	printf("Ingrese codigo del producto que quiere eliminar.\n");
	scanf("%d", &cod);
	_clrscr();
	while((act!=0)&&(act->pro.codigo!=cod)){
	ant=act;
    act=act->ps;
    }
if(act==0){
		printf("No existe producto con ese codigo.\n");
		_getch();
		_clrscr();
		}
else if(ant==0){
*l=act->ps;
free(act);
printf("Se elimino el producto.\n");
_getch();
_clrscr();
		}
else{
		
ant->ps=act->ps;
free(act);
printf("Se elimino el producto.\n");
_getch();
_clrscr();

}	
		
}
	
}

//Ver productos sin stock

void sinstock(struct lista *l){

int s;
s=0;

if(l==0){
	printf("La lista esta vacia.\n");
	_getch();
	_clrscr();
	}
else{
	while(l!=0){
		if(l->pro.stock==0){
			printf("El producto de codigo %d tiene stock 0.\n",l->pro.codigo);
			_getch();
			_clrscr();
				s=1;
			}
			
		l=l->ps;
		}
	}
if(s==0){
	
	printf("Ningun producto tiene stock 0.\n");
			_getch();
			_clrscr();
	}
}
