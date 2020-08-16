#include <stdio.h>

int main()
{
    char nome[80];

    printf("Disgite seu nome: ");
    gets(nome);

    printf("O nome digitado foi: %s \n", nome);


    return 0;
}