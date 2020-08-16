#include <stdio.h>
#include <stdlib.h>

int main()
{  
    int codigo, contPan, contCha, contVas;

    contPan = contCha = contVas = 0;

    do 
    {
        system ("cls");
        printf("Menu de opcoes \n");
        printf("0 - Encerrar o programa \n");
        printf("1 - Incluir uma panela no estoque \n");
        printf("2 - Incluir uma chaleira no estoque \n");
        printf("3 - Incluir uma vassoura no estoque \n");
        printf("4 - Relatorio de inclusões \n");
        printf("Escolha uma opcao \n");
        scanf("%d", &codigo);

        switch (codigo)
    {
    case 0:
        printf("Encerrando o programa \n");        
        break;
    case 1:
        printf("Incluindo uma panela no estoque \n");
        contPan++;
        break;
    case 2:
        printf("Incluindo uma chaleira no estoque \n");
        contCha++;
        break;
    case 3:
        printf("Incluindo uma vassoura no estoque \n");
        contVas++;
        break;
    case 4:
        printf("Relatorio de inclusoes \n");
        printf("%d panelas no estoque \n", contPan);
        printf("%d chaleiras no estoque \n", contCha);
        printf("%d vassouras no estoque \n", contVas);
        break;
    
    default:
    printf("Opcao invalida \n");
        break;
    }

    system ("pause");


    } while (codigo != 0);

    



    return 0;
}