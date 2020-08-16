#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l1, l2, l3;

    system("cls");
    printf("Digite o valor do lado 1: ");
    scanf("%d", &l1);
    printf("Digite o valor do lado 2: ");
    scanf("%d", &l2);
    printf("Digite o valor do lado 3: ");
    scanf("%d", &l3);
    printf("\n");

    if (l1 < l2 + l3 && l2 < l1 + l3 && l3 < l1 + l2 )
    {
        if (l1 == l2 && l2 == l3)
        {
            printf("Triangulo EQUILATERO");
        }
        else if (l1 != l2 && l2 != l3)
        {
            printf("Triangulo ESCALENO");
        }
        else
        {
            printf("Triangulo ISOCELES");
        }
        
            
    }
    else
    {
        printf("Os valores indicados nao formam um triangulo \n");
    }
    

    return 0;
}