#include <stdio.h>

int main()
{
    int codigo;

    printf("Digite um codigo: ");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1:
        printf("Panela \n");
        break;
    case 2:
        printf("Chaleira \n");
        break;
    case 3:
        printf("Prato \n");
        break;
    default:
        printf("Codigo invalido \n");
        break;
    }


    return 0;
}