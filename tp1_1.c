#include <stdio.h>

int main(){

    int numero=2, *pnumero;
    pnumero = &numero;

    printf("\n%d", *pnumero);  //Contenido del puntero
    printf("\n%p", pnumero);   //Direccion de memoria almacenada por el puntero
    printf("\n%p", &numero);   //Direccion de memoria almacenada de la variable
    printf("\n%p", &pnumero);   //Direccion de memoria almacenada del puntero


    printf("\n\n%d", sizeof(numero));  //El tamaño de memoria utilizado por esa variable usando la función sizeof()
    printf("\nHola mundo");


    return 0;
}
