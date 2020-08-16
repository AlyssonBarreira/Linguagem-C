#include <stdio.h>

int main()
{   
    int numero = 0, qtdnumero = 0;

    

    while (numero >= 0)
    {
        printf("Digite um valor: ");
        scanf("%d", &numero);

        qtdnumero++;
    }

    printf("Foram digitados %d numeros \n", qtdnumero);


    return 0;
}