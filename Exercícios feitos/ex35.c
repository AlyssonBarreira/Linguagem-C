#include <stdlib.h>
#include <stdio.h>

int main()
{
    int codigo, contUnidade, entradas, saidas;

    entradas = saidas = contUnidade = 0;

    do
    {
        system("cls");
        printf("Menu de opcoes \n");
        printf("0 - Encerrar o programa \n");
        printf("1 - Incluir uma unidade no estoque \n");
        printf("2 - Excluir uma unidade do estoque \n");
        printf("3 - Mostrar o total disponivel no estoque \n");
        printf("4 - Mostrar o total de entrada no estoque \n");
        printf("5 - Mostrar o total de saidas no estoque \n");
        printf("Escolha uma opcao: ");
        scanf("%d", &codigo);

        switch (codigo)
        {
        case 0:
            printf("Encerrar o programa \n");
            break;
        case 1:
            printf("Incluir uma unidade no estoque \n");
            contUnidade++;
            entradas++;
            break;
        case 2:
            if (contUnidade == 0)
            {
                printf("Nao eh possivel excluir itens pois o estoque nao possui unidades \n");
            }
            else
            {
             printf("Excluir uma unidade do estoque \n");
            contUnidade--;
            saidas++;   
            }           
            break;
        case 3:
            printf("Total disponivel no estoque \n");
            printf("%d unidade \n", contUnidade);
            break;
        case 4:
            printf("Total de entradas no estoque \n");
            printf("%d entradas no estoque \n", entradas);
            break;
        case 5:
            printf("Total de saidas no estoque \n");
            printf("%d saidas no estoque \n", saidas);
            break;
        default:
            printf("Codigo invalido \n");
            break;
        }



        system("pause");

    } while (codigo != 0);
    



    return 0;
}