#include <stdio.h>

int main()
{
    float n1, n2, resultado;

    printf("Digite um valor: ");
    scanf("%f", &n1);
    printf("Digite outro valor: ");
    scanf("%f", &n2);

    if (n1 > n2)
    {
        resultado = n1 / n2;
        printf("%.1f / %.1f = %.1f \n", n1, n2, resultado);
    }
    else
    {
        resultado = n2 / n1;
        printf("%.1f / %.1f = %.1f \n", n2, n1, resultado);
    }

    printf("O resultado foi: %.1f \n", resultado);
    
    

    return 0;
}