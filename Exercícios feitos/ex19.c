#include <stdio.h>

int main()
{
    float salBruto, descInss, salLiq, valorInss;

    printf("Digite o salario bruto: R$ ");
    scanf("%f", &salBruto);

    if (salBruto <= 1317.07)
    {
        descInss = 8;
    }
    else if (salBruto <= 2195.13)
    {
        descInss = 9;
    }
    else
    {
        descInss = 11;
    }

    valorInss = salBruto * (descInss / 100);

    salLiq = salBruto - valorInss;

    printf("Salario bruto......................: R$ %.2f \n", salBruto);
    printf("Taxa do INSS.......................: R$ %.0f%% \n", descInss);
    printf("Valor do desconto do INSS..........: R$ %.2f \n", valorInss);
    printf("Salario liquido....................: R$ %.2f \n", salLiq);
    

    return 0;
}