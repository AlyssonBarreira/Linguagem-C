#include <stdio.h>

int main()
{
    int numero, resultado, contar;

    contar = 0;

    while (numero < 5)
    {
        printf("Digite um valor: ");
        scanf("%d", &numero);

        resultado = numero * 3;

        printf("O resultado foi: %d \n", resultado);
    }
    


    return 0;
}