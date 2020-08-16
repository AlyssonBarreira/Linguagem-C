#include <stdio.h>

int main()
{
    int numero, res;

    for (int i = 0; i < 10; i++)
    {
        printf("digite um valor: ");
        scanf("%d", &numero);
        res = numero * 2;
        printf("O resultado foi: %d\n", res);
    }
    


    return 0;
}