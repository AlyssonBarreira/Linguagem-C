#include <stdio.h>

int main()
{
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor > 0)
    {
        printf("POSITIVO \n");
    }
    else if(valor <0)
    {
        printf("NEGATIVO \n");
    }
    if (valor == 0)
    {
        printf("ZERO \n");
    }
    

    
    
    


    return 0;
}