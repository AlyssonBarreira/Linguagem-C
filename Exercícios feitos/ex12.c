#include <stdio.h>

int main()
{
    int anoDeNascimento, idade, dias, horas, minutos, segundos;
    
    int anoAtual = 2020;

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &anoDeNascimento);

    idade = anoAtual - anoDeNascimento;
    dias = 365 * idade;
    horas = dias * 24;
    minutos = horas * 60;
    segundos = minutos * 60;

    printf("Sua idade eh: %d \n", idade);
    printf("Quantidade de dias: %d \n", dias); 
    printf("Quantidade de horas: %d \n", horas); 
    printf("Minutos: %d \n", minutos); 
    printf("Segundos: %d \n", segundos);     



    return 0;
}