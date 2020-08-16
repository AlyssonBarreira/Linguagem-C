#include <stdio.h>

int main()
{
    float salHora, salBruto, salLiq, salFamilia;
    int qtdHoras, qtdFilhos;

    printf("Digite o salario por hora do professor: R$ ");
    scanf("%f", &salHora);
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%d", &qtdHoras);
    printf("Digite a quantidade de filhos menores de 14 anos: ");
    scanf("%d", &qtdFilhos);
    
    salBruto = salHora * qtdHoras;
    
    if (salBruto <= 700)
    {
        salFamilia = 8.5 * qtdFilhos;
    }
    else if (salBruto <= 1000)
    {
        salFamilia = 6.5 * qtdFilhos;
    }
    else
    {
        salFamilia = 2.5 * qtdFilhos;
    }

    salLiq = salBruto + salFamilia;

    printf("Salario bruto...........: R$ %.2f \n", salBruto);
    printf("Salario familia.........: R$ %.2f \n", salFamilia);
    printf("Salario liquido.........: R$ %.2f \n", salLiq);


    return 0;
}