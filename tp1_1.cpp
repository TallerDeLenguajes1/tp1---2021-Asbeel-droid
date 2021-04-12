#include <stdio.h>

int main()
{
    int v1=512;
    int *p1 = &v1;

    printf("El contenido del puntero: %d \n", *p1);
    printf("La direccion de memoria almacenada por el puntero: %u \n", p1);
    printf("La direccion de memoria de la variable: %u \n", &v1);
    printf("La direccion de memoria del puntero: %u \n", &p1);
    printf("El tamanio de memoria utilizado por esa variable usando la funcion sizeof(): %d",sizeof(v1) );
    getchar();
    return 0;
}