#include <stdio.h>

int main()
{
    float media, n1, n2, n3;
    char materia[80], aluno[80], professor[80];

    printf("Digite o nome do curso: ");
    gets(materia);
    printf("Digite o nome do professor: ");
    gets(professor);
    printf("Digite o nome do aluno: ");
    gets(aluno);
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    
    printf("A media final do aluno eh: %.1f \n", media);

    if (media >= 6)
    {
        printf("O aluno esta APROVADO");
    }else
    {
        printf("O aluno esta REPROVADO");
    }
    
    

    

    return 0;
}