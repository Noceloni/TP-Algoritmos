/*     Ejemplo tercer parcial:

En una sucursal de una obra social los tramites fuera de horarios se envian por mensaje de texto, esta información es almacenada
en un soporte, hay un registro por trámite, y tiene la siguiente descripción: cod_afiliado, tipo_tramite(reintegro o consulta)) y cod_descripcion.
Esta información es puesta en una pila para su posterior procesamiento (Esta parte no). Se cuenta además con información de los afiliados en un soporte 
con la siguiente descripción: cod_afiliado, plan(210,310,410 o 510), DNI Y ApyNom.

Se desea procesar esta información para organizar las tareas administrativas correspondientes. Las tareas a realizar son:
1)Se procesan los trámites correspondientes a los reintegros para obtener una lista de tareas para la administración con el siguiente detalle:

cod_afiliado
Plan
DNI
ApyNom
Tipo_tramite

2)Recorrer la lista de tareas administrativas en forma recursiva y obtener los siguientes valores:

Total de trámites Plan 210.
Total de trámites Plan 410.      */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct tramite{

int cod_afiliado,cod_descripcion, tipo_tramite; //tipo_tramite 1=reintegro, 2=consulta

};

struct afiliado{

int cod_afiliado, plan, dni;
char apynom[30];

};

struct lista_afiliado{

struct afiliado afi;
struct lista_afiliado *ps;

};

struct lista_tramite{

struct tramite tra;
struct lista_tramite *ps;

};

struct lista_tarea{

struct lista_tramite *tra;
struct lista_afiliado *afi;
struct lista_tarea *ps;

};

struct tramite t;
struct afiliado a;
struct lista_afiliado *la;
struct lista_tramite *ltra;
struct lista_tarea *lt;

void inicializarlistas(struct lista_afiliado **la,struct lista_tramite **ltra,struct lista_tarea **lt);
void agregarafi(struct afiliado *a);
void agregartra(struct tramite *t);
void insertar(struct lista_tarea **lt, struct lista_tramite ltra, struct lista_afiliado la);






int main(void){

int res;
res=9;
inicializarlistas(&la, &ltra, &lt);

while(res!=0){

printf("Menu de opciones.\n");
printf("1.Agregar afiliado.\n");
printf("2.Agregar tramite.\n");
printf("3.Insertar tramite.\n");
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

agregarafi(&a);

break;	

case 2:

agregartra(&t);

break;

case 3:

insertar(&lt, ltra, la);

break;

case 4:



break;
				
case 5:



break;

case 6:


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

void inicializarlistas(struct lista_afiliado **la,struct lista_tramite **ltra,struct lista_tarea **lt){

*la=0;
*ltra=0;
*lt=0;

}

//Agregar afiliado

void agregarafi(struct afiliado *a){

printf("Ingrese apellido y nombre del afiliado.\n");
scanf("%s", a->apynom);
printf("Ingrese DNI del afiliado.\n");
scanf("%d", &a->dni);
printf("Ingrese codigo del afiliado.\n");
scanf("%d", &a->cod_afiliado);
printf("Ingrese plan del afiliado.\n");
scanf("%d", &a->plan);

}

//Agregar trámite

void agregartra(struct tramite *t){

printf("Ingrese codigo del afiliado.\n");
scanf("%d", &t->cod_afiliado);
printf("Ingrese tipo de tramite (1= reintegro, 2= consulta).\n");
scanf("%d", &t->tipo_tramite);
printf("Ingrese codigo de descripcion.\n");
scanf("%d", &t->cod_descripcion);
_clrscr();

}

//Insertar trámite

void insertar(struct lista_tarea **lt, struct lista_tramite ltra, struct lista_afiliado la){

struct lista_tarea *act;
struct lista_tarea *ant;
struct lista_tarea *nuevo=malloc(sizeof(struct lista_tarea));

nuevo->afi->afi.cod_afiliado=ltra.tra.cod_afiliado;
strcpy(nuevo->afi->afi.apynom, la.afi.apynom);
nuevo->afi->afi.dni=la.afi.dni;
nuevo->afi->afi.plan=la.afi.plan;
nuevo->tra->tra.tipo_tramite=ltra.tra.tipo_tramite;


if(*lt==0){
	*lt=nuevo;
	
	}

}
