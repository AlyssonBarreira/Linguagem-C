#include <stdio.h>

int main()
{   
    int numero, soma = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("digite um numero: ");
        scanf("%d", &numero);

        soma = soma + numero;
    }

    

    printf("A soma eh: %d\n", soma);


    return 0;
}