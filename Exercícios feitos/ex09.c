//Fórmula do volume -> volume = PI (3,14159) * raio² * altura

#include <stdio.h>

int main()
{
    float volume, raio, altura;
    float pi = 3.14159;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    volume = pi * (raio * raio) * altura;

    printf("O volume da lata de azeite eh: %.2f \n", volume);

    printf("%.2f = %.2f * (%.2f * %.2f) * %.2f", volume, pi, raio, raio, altura);

    return 0;
}    
