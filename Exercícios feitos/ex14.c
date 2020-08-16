#include <stdio.h>

int main()
{
    float n1, n2;

    printf("digite um numero: ");
    scanf("%f", &n1);
    printf("digite outro numero: ");
    scanf("%f", &n2);

    if (n1 > n2)
    {
        printf("%.1f eh o numero maior \n", n1);
    }else
    {
        printf("%.1f eh o numero maior \n", n2);
    }
    
    


    return 0;
}