#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 1000)
    {
        printf("O numero informado eh maior que 1000");
    }
        

    return 0;
}