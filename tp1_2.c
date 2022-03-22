#include <stdio.h>

//Definicion de funciones
int calcularCuadrado(int num);
void calcularCuadradoVoid(int *pnum);
void mostrarDatos(int num);
void Invertir(int *p1, int *p2);
void orden(int *num1, int *num2);


//Definicion de funcion principal
int main()
{
int resultado,numero,numeroI1,numeroI2,aux,numeroO1, numeroO2;

puts("----------------------Entradas-----------");
printf("Ingrese un numero (Para calcular el cuadrdado): ");
scanf("%d", &numero);
aux=numero;

printf("\nIngrese dos numeros para invertir su contenido(separados con comas): ");
scanf("%d, %d",&numeroI1,&numeroI2);

printf("\nIngrese dos numeros distintos para ordenar su contenido(separados con comas): ");
scanf("%d, %d",&numeroO1,&numeroO2);

puts("----------------------Respuestas-----------");
printf("\nNumeros antes de la inversion: N1=%d, N2=%d", numeroI1, numeroI2);
Invertir(&numeroI1, &numeroI2);
printf("\nNumeros despues de la inversion: N1=%d, N2=%d\n", numeroI1, numeroI2);

resultado=calcularCuadrado(numero);
calcularCuadradoVoid(&aux); 
mostrarDatos(numero);

printf("\n\nNumeros antes de realizar el orden: N1=%d, N2=%d", numeroO1, numeroO2);
orden(&numeroO1, &numeroO2);
printf("\nNumeros ordenados: Mayor=%d, Menor=%d\n", numeroO1, numeroO2);

printf("\nEl cuadrado del primer numero es: %d", resultado);
printf("\nEl cuadrado del primer numero con void es: %d", aux);
    return 0;
}

//Desarrollo de funciones
int calcularCuadrado(int num) {
    return (num*num);
}

void calcularCuadradoVoid(int *paux){
    int aux;
    aux=(*paux);
    (*paux)=aux*aux;
}

void mostrarDatos(int num){
    printf("\nDireccion de la primera variable: %p", &num);
    printf("\nContenido de la primera variable: %d", num);
}

void Invertir(int *p1, int *p2){
    int aux1,aux2;
    aux1=*p1;
    aux2=*p2;
    *p2=aux1;
    *p1=aux2;
}


void orden(int *num1, int *num2){
    int aux1, aux2;
    aux1=*num1;
    aux2=*num2;
    if((*num1)<(*num2)){
        *num1=aux2;
        *num2=aux1;
    }
}