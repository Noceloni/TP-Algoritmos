/*Cola-> Cod_prod, cuil, cantidad
Lista prod-> Cod_prod, descripcion deproducto, pre, stock
Lista cliente-> Cuil, NyA, dom_entrega
Lista final-> Cuil, NyA, dom_entrega, desc_producto, precio_ tot // Recorrer recursivamente, imprimir todos los datos.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

struct cola{

int codprod, cuil, cantidad;
struct cola *pini;
struct cola *pfin;

};

struct producto{

int codprod, precio, stock;
char descripcion[40];
struct producto *ps;

};

struct cliente{

int cuil;
char nombre[40], domicilio[40];
struct cliente *ps;

};

struct listaf{

int cuil, preciototal;
char nombre[40], domicilio[40],descripcion[40];
struct listaf *ps;

};

struct cola *c;
struct producto *p;
struct cliente *cli;
struct listaf *f;

void inicializarlistas(struct cola **c, struct producto **p, struct cliente **cli, struct listaf **f);
void cargaproducto(struct producto **p);
void cargacliente(struct cliente **cli);
void cargacola(struct cola **c);














int main(void){

inicializarlistas(&c, &p, &cli, &f);

}

//Inicializar listas

void inicializarlistas(struct cola **c, struct producto **p, struct cliente **cli, struct listaf **f){

*c=0;
*p=0;
*cli=0;
*f=0;

}

//Carga producto (En hoja ya está precargada)

void cargaproducto(struct producto **p){

int resp;
resp=1;

while(resp==1){

struct producto *nodop = malloc(sizeof(struct producto));
struct producto *auxp;
nodop->ps=0;

printf("Ingrese descripcion del producto./n");
scanf("%s", nodop->descripcion);
fflush(stdin);
printf("Ingrese codigo del producto./n");
scanf("%d", &nodop->codprod);
fflush(stdin);
printf("Ingrese precio del producto./n");
scanf("%d", &nodop->precio);
fflush(stdin);
printf("Ingrese stock del producto./n");
scanf("%d", &nodop->stock);
fflush(stdin);
_clrscr();

if(*p==0){
		*p=nodop;
		}
else{
	auxp=*p;
       while(auxp->ps!=0){
			
			auxp=auxp->ps;
			
			}	
		auxp->ps=nodop;
		
		}

printf("Desea ingresar otro producto? (1=si, 2=no)/n");
scanf("%d", &resp);
fflush (stdin);

}
}

//Carga cliente (En hoja ya está precargada)

void cargacliente(struct cliente **cli){

int resp;
resp=1;

while(resp==1){

struct cliente *nodocli = malloc(sizeof(struct cliente));
struct cliente *auxcli;
printf("Ingrese nombre y apellido./n");
scanf("%s", nodocli->nombre);
fflush(stdin);
printf("Ingrese cuil./n");
scanf("%d", &nodocli->cuil);
fflush(stdin);
printf("Ingrese domicilio de entrega./n");
scanf("%s", nodocli->domicilio);
fflush(stdin);

if(*cli==0){
		*cli=nodocli;
		}
else{
	auxcli=*cli;
       while(auxcli->ps!=0){
			
			auxcli=auxcli->ps;
			
			}	
		auxcli->ps=nodocli;
		
		}

printf("Desea ingresar otro cliente? (1=si, 2=no)/n");
scanf("%d", &resp);
fflush (stdin);

}
}

//Carga cola

void cargacola(struct cola **c){

struct cola *nodocola = malloc(sizeof(struct cola));

printf("Ingrese codigo del producto./n");
scanf("%d", &nodocola->codprod);
fflush(stdin);
printf("Ingrese cuil./n");
scanf("%d", &nodocola->cuil);
fflush(stdin);
printf("Ingrese cantidad requerida del producto./n");
scanf("%d", &nodocola->cantidad);
fflush(stdin);
_clrscr();

}
