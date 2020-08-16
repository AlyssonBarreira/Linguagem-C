#include <stdio.h>

int main()
{
    int kmInicial = 200000;
    int kmFinal = 207379;
    int distancia;
    
    distancia = kmFinal - kmInicial;

    printf("O km inicial do carro: %d \n", kmInicial);
    printf("O km final do carro: %d \n", kmFinal);
    printf("Distancia percorrida: %d \n", distancia);


    return 0;
}