#include <stdio.h>
#include <stdlib.h>

int cuadrado(int x){
    return (x=x*x);
}


void cuadradoVoid(int x){
    int aux=0;
    aux=x;
    x=x*x;
    printf("El cuadrado de %d es %d\n\n",aux,x);
    return;
}

//contenido y direccion de la variable
void contenidoVariable(int x){
    printf("El contenido de la variable es %d\nLa direccion de memoria de la variable es %u\n\n",x,&x);
    return;
}


//invierte el valor de las variables de entrada
void Invertir(int a,int b){
    int aux=0;
    aux=a;
    a=b;
    b=aux;

    printf("Se invirtieron las variables, ahora A es %d y B es %d\n\n",a,b);

    return;
}

//Ordena las variables: a<b
void Orden(int a,int b){
    if (a>b)
    {
        int aux=a;
        a=b;
        b=aux;
    }
    printf("El menor es %d y el mayor es %d\n\n",a,b);
    return;
}
// -------------MAIN-----------------------
int main(void){
    setvbuf(stdout, NULL, _IONBF, 0);
    int x=0,a=0,dontclose;

    printf("Ingrese un numero entero:\n");
    scanf("%d",&a);
    printf("El cuadrado de %d es: %d\n\n",a,x=cuadrado(a));

    printf("Ingrese otro numero entero:\n");
    scanf("%d",&a);
    cuadradoVoid(a);


    printf("Ingrese otro numero entero:\n");
    scanf("%d",&a);
    contenidoVariable(a);

    printf("Ingrese dos numeros a invertir:\n");
    scanf("%d%d",&a,&x);
    Invertir(a,x);
    

    printf("Ingrese dos numeros enteros distintos:\n");
    scanf("%d%d",&a,&x);
    Orden(a,x);


    scanf("%d",&dontclose);
    return 0;
}