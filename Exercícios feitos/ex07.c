#include <stdio.h>

int main()
{
    float raio, altura, volume;

    raio = 2;
    altura = 20;

    volume = 3.14159 * (raio*raio) * altura;

    printf("O volume da lata de azeite e: %.2f \n", volume);


    return 0;
}