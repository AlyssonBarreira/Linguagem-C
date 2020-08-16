#include <stdio.h>

int main()
{
    float receita, despesa;

    printf("Digite o valor da receita: R$ ");
    scanf("%f", &receita);
    printf("Digite o valor da despesa: R$ ");
    scanf("%f", &despesa);

    if (receita > despesa)  
    {
        printf("LUCRO");
    }
    else
    {
        printf("PREJUIZO");
    }
    
    

    return 0;
}