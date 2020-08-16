#include <stdio.h>

int main()
{
    int kmInicial, kmFinal, distancia;

    printf("Digite o km inicial: ");
    scanf("%d", &kmInicial);
    printf("Digite o km final: ");
    scanf("%d", &kmFinal);

    distancia = kmFinal - kmInicial;

    printf("%d - %d = %d \n", kmFinal, kmInicial, distancia);
    printf("A distancia percorrida foi: %d \n", distancia);
    

    return 0;
}