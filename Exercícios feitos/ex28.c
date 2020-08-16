#include <stdio.h>

int main()
{
    int soma = 0;

    for (int i = 1; i <= 100; i++)
    {
    soma = soma + i;
    }

    printf("A soma foi: %d \n", soma);


    return 0;
}