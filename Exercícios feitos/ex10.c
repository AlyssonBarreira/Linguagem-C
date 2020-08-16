#include <stdio.h>

int main()
{
    float lucro, receita, despesa;

    printf("Informe o valor da receita da empresa: ");
    scanf("%f", &receita);
    printf("Informe o valor da despesa da empresa: ");
    scanf("%f", &despesa);

    lucro = receita - despesa;

    printf("O lucro anual da empresa eh: %.2f", lucro);


    return 0; 
}