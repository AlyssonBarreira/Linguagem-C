#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    system("cls");
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num >= 0 && num <= 100)
    {
        printf("O numero esta na faixa de 0 a 100 \n");
    }
    else
    {
        printf("O numero nao esta na faixa de 0 a 100 \n");
    }
    


    return 0;
}