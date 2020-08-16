/*
    Faixa de consumo (m³) / Preço (por m³)
    até 10                / Incluido na franquia
    11 a 30               / R$ 1
    31 a 100              / R$ 2
    101 em diante         / R$ 5

    Escreva um programa que, dado o consumo de uma residencia em m³. Calcula o valor da conta de água.
    Entrada - numero inteiro indicando o consumo de água.
    Saida - uma unica linha indicando o valor da conta daquela resisdencia.
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int consumo, aPagar;

    do
    {
    system("cls");
    printf("Digite o consumo de agua em m3: ");
    scanf("%d", &consumo);
    } while (consumo < 0 || consumo > 120);

    if ( consumo >= 0 && consumo <= 10)
    {
        aPagar = 7;
    }  
    else if (consumo > 10 && consumo <= 30)
    {
        aPagar = 7 + ((consumo - 10) * 1);
    }  
    else if (consumo > 30 && consumo <= 100)
    {
        aPagar = 7 + 20 + ((consumo - 30 ) * 2);
    }
    else
    {
        aPagar = 7 + 20 + 140 + ((consumo - 100) * 5);
    }
    

    printf("\n Total a pagar: R$ %d", aPagar);



    return 0;
}