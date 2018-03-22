#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD_NUMEROS 3


int main()
{
    int i;
    int numeroUsuario;
    int acumulador = 0; //la primera linea que se ejecuta
    float resultado;
    int flag= 1;
    int max;
    int min;

    for(i=0 ; i < CANTIDAD_NUMEROS ; i++)
    {
        printf("Dame el Numero %d\n",i+1);
        scanf("%d",&numeroUsuario);
        acumulador = acumulador + numeroUsuario;

    if(max < numeroUsuario || flag == 1) //o se puede preguntar si " i " a 0  ( i == 0 )
     {
        max = numeroUsuario;

    }
    if(min > numeroUsuario || flag == 1){
        min = numeroUsuario;
        flag = 0;
    }
    }

    resultado = (float)acumulador / CANTIDAD_NUMEROS;

    printf("Resultado %.2f\n, el maximo es %d\n y el minimo es %d",resultado, max, min); // %.2f\n para que imprima un float y el 0.2 ( es para que imprima 2 decimales) .
    //  tambien para concatemar no hace falta separar las " "  solo respetar el orden de los modificadores y sus variables...

    return 0;
}
