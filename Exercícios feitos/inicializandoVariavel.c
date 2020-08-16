#include <stdio.h>
 int main()
 {
     int numero = 50;
     float valor = 4.5;
     char letra = 'A';
     int valor1, valor2, valor3; // Variaveis com o mesmo tipo podem ser colocados na mesma linha

     valor1 = valor2 = valor3 = 0;

     printf("Variavel numero.......: %d \n", numero);
     printf("Variavel valor.......: %f \n", valor);
     printf("Variavel valor.......: %.2f \n", valor); // .2 = duas casas depois da virgula
     printf("Variavel letra.......: %c \n", letra);
     printf("Variavel valor1, valor2, valor3.......: %d %d %d \n", valor1, valor2, valor3);

     return 0;
 }