#include <stdio.h>

int main()
{
    int numero, somaPositivo, somaNegativo;

    numero = 1;
    
    somaPositivo = 0;
    somaNegativo = 0;

    while (numero != 0)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero > 0)
        {
            somaPositivo = somaPositivo + numero;
        }
        else
        {
            somaNegativo = somaNegativo + numero;
        }

    }
        printf("A soma dos positivos foi: %d \n", somaPositivo);
        printf("A soma dos negativos foi: %d \n", somaNegativo);  
   


    return 0;
}