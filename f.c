#include <stdio.h>
#include <string.h>
#include "f.h"

void leerCadena(char *cadena,int n){
    fflush(stdin);
    fgets(cadena,n,stdin);
    int len = strlen(cadena) -1 ;
    cadena[len]= '\0';
}

int menu(){
    int opc;
    printf("Seleccione una opcion: \n");
    printf("1. Inicializar productos\n");
    printf("2. Imprimir productos\n");
    printf("3. Realizar venta\n");
    printf("4. Listar ventas\n");
    printf("5. Buscar ventas\n");
    printf("6. Salir\n");
    printf(">>>");
    scanf("%d",&opc);
    return opc;
}

void inicializarProductos(struct Producto mercancia[5]){
    strcpy(mercancia[0].nombre,"Microondas");
    mercancia[0].precio=80;
    strcpy(mercancia[1].nombre,"Licuadora");
    mercancia[1].precio=30;
    strcpy(mercancia[2].nombre,"Cocina");
    mercancia[2].precio=200;
    strcpy(mercancia[3].nombre,"Refrigeradora");
    mercancia[3].precio=600;
    strcpy(mercancia[4].nombre,"Television");
    mercancia[4].precio=700;
}
void imprimirProductos(struct Producto mercancia[5]){
    printf("Productos Disponibles\n");
    printf("#\t\tNombre\t\tPrecio\n");
    for (int i = 0; i < MAXPRODUCTOS; i++)
    {
        printf("%d\t\t%s\t\t%2.f\\n",i,mercancia[i].nombre,mercancia[i].precio);
    }
    
}

