#include <stdio.h>

int main()
{
    int numero, somaPositivo = 0, somaNegativo = 0, zero = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero > 0)
    {
        somaPositivo = somaPositivo + numero;
    }
    else if (numero < 0)
    {
        somaNegativo = somaNegativo + numero;
    }
    else
    {
        zero++;
    }
    }

    
    
    printf("Soma dos Positivos: %d \n", somaPositivo);
    printf("Soma dos negativos: %d \n", somaNegativo);
    printf("quantidade de zero: %d \n", zero);


    return 0;
}