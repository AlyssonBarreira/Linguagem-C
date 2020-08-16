#include <stdio.h>

int main()
{
    int numero;
    float media, soma = 0, qtdLido = 0;
    char resposta = 's';

    while (resposta == 's')
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        soma = soma + numero;

        qtdLido++;



        printf("Deseja digitar outro numero? (s/n) \n");
        resposta = getche();
        printf("\n \n");
    }

    media = soma / qtdLido;

    printf("A media dos numeros lidos foi: %.1f \n", media);


    return 0;
}