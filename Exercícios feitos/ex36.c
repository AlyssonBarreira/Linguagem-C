/*
    0 - Encerrar o programa 
    1 - Entrar uma pessoa no restaurante 
    2 - Sair uma pessoa do restaurante 
    3 - Mostrar quantos lugares estão disponiveis 
    4 - Mostrar o total de pessoas que entraram 
    5 - Mostrar o total de pessoas que sairam 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int codigo, qtdPessoas, entrar, sair, qtdLugares, disponivel;

    qtdLugares = 40;

    qtdPessoas = entrar = sair = 0;

    do
    {
        system("cls");
        printf("Menu de opcoes \n");
        printf("0 - Encerrar o programa \n");
        printf("1 - Entrar uma pessoa no restaurante \n");
        printf("2 - Sair uma pessoa do restaurante \n");
        printf("3 - Mostrar quantos lugares estao disponiveis \n");
        printf("4 - Mostrar o total de pessoas que entraram \n");
        printf("5 - Mostrar o total de pessoas que sairam \n");
        printf("Digite um codigo: ");
        scanf("%d", &codigo);

        switch (codigo)
        {
        case 0:
            printf("O programa foi encerrado \n");
            break;
        case 1:
            if (qtdPessoas >= qtdLugares)
            {
                printf("Nao eh possivel entrar mais pessoas \n");
            }
            else
            {
                printf("Entrou uma pessoa no restaurante \n");
                qtdPessoas++;
                entrar++;
            }
            break;
        case 2:
            if (qtdPessoas == 0)
            {
                printf("Nao eh possivel sair pois nao ha pessoas no restaurante \n");
            }
            else
            {
                printf("Saiu uma pessoa do restaurante \n");
                qtdPessoas--;
                sair++;
            }
            break;
        case 3:
            printf("Lugares disponiveis \n");
            disponivel = qtdLugares - qtdPessoas;
            printf("Ha disponivel %d lugares \n", disponivel);
            break;
        case 4:
            printf("Entraram %d pessoas do restaurante \n", entrar);
            break;
        case 5:
            printf("Sairam %d pessoas do restaurante \n", sair);
            break;
        default:
            printf("Codigo invalido \n");
            break;
        }

        system("pause");

    } while (codigo != 0);
    



    return 0;
}