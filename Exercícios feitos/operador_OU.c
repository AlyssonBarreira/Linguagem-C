#include <stdlib.h>
#include <stdio.h>

int main()
{
    int codigo;

    system("cls");
    printf("Opcao de genero \n");
    printf("0 - Masculino \n");
    printf("1 - Feminino \n\n");
    printf("Digite um codigo: ");
    scanf("%d", &codigo);

    if (codigo == 0 || codigo == 1)
    {
        printf("Codigo valido");
    }
    else
    {
        printf("Codigo invalido");
    }
    
    

    return 0;
}