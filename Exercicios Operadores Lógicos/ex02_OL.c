#include <stdio.h>
#include <stdlib.h>

 int main()
 {
    int x, y;

    system("cls");
    printf("Pontos do Quadrante \n\n");
    printf("Digite a coordenada x: ");
    scanf("%d", &x);
    printf("Digite a coordenada y: ");
    scanf("%d", &y);

    if (x > 0 && y > 0)
        printf("Primeiro Quadrante \n");
    else if (x < 0 && y > 0)
        printf("Segundo Quandrante \n");
    else if (x < 0 && y < 0)
        printf("Terceiro Quadrante \n");
    else
        printf("Quarto Quadrante \n");
    



     return 0;
 }