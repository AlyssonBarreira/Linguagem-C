#include <stdio.h>
#include <stdlib.h>

int main()
{   
    char resposta = 's';
    int codigo, idade, qtdSolteiro, qtdCasado, qtdDivorciado;
    float mediaSolteiro, mediaCasado, mediaDivorciado;

    qtdSolteiro = qtdCasado = qtdDivorciado = 0;
    mediaSolteiro = mediaCasado = mediaDivorciado = 0;

    while (resposta == 's')
    {   
        system("cls");
        printf("Codigo do estado civil \n");
        printf("1 - Solteiro \n");
        printf("2 - Casado \n");
        printf("3 - Divorciado \n");
        printf("Escolha um codigo civil: ");
        scanf("%d", &codigo);
        printf("Digite a idade da pessoa: ");
        scanf("%d", &idade);

        switch (codigo)
        {
        case 1:
            mediaSolteiro += idade;
            qtdSolteiro++;
            break;
        case 2:
            mediaCasado += idade;
            qtdCasado++;
            break;
        case 3:
            mediaDivorciado += idade;
            qtdDivorciado++;
            break;
        
        default:
            printf("Codigo invalido \n");
            break;
        }


        printf("Deseja digitar dados de outra pessoa? (s/n): ");
        resposta = getche();
        printf("\n \n");
    }

    mediaSolteiro /= qtdSolteiro;
    mediaCasado /= qtdCasado;
    mediaDivorciado /= qtdDivorciado;

    printf("A media de idade dos Solteiros foi: %.1f \n", mediaSolteiro);
    printf("A media de idade dos Casados foi: %.1f \n", mediaCasado);
    printf("A media de idade dos Divorciado foi: %.1f \n", mediaDivorciado);



    return 0;
}