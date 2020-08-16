#include <stdio.h>

int main()
{
    float salarioReajustado, salarioAtual;

    printf("Digite o salario do funcionario: R$");
    scanf("%f", &salarioAtual);

    if (salarioAtual <= 1000)
    {
        salarioReajustado = salarioAtual + (salarioAtual * 0.15);
        
        printf("O salario foi reajustado para:  R$%.2f \n", salarioReajustado);
    }
    else if (salarioAtual <= 2000)
    {
        salarioReajustado = salarioAtual + (salarioAtual * 0.10);
        
        printf("O salario foi reajustado para:  R$%.2f \n", salarioReajustado);
    }
    else
    {
        salarioReajustado = salarioAtual + (salarioAtual * 0.05);
        
        printf("O salario foi reajustado para:  R$%.2f \n", salarioReajustado);
    }
    


    return 0;
}