#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, media;
    char resposta = 's';

    while (resposta == 's')
    {
        system("cls");
        printf("Digite a primeira nota: ");
        scanf("%f", &n1);
        printf("Digite a segunda nota: ");
        scanf("%f", &n2);
        printf("Digite a terceira nota: ");
        scanf("%f", &n3);

        media = (n1 + n2 + n3) / 3;

        printf("A media do aluno foi: %.1f \n", media);

        if (media >= 6)
        {
            printf("APROVADO \n");
        }
        else
        {
            printf("REPROVADO \n");
        }

        printf("Deseja digitar a nota de outros alunos? (s/n) \n");
        resposta = getche();
        printf("\n \n");
        
    }


    return 0;
}