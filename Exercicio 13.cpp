#include <iostream>
#include<stdio.h>

int main()
{
    int p, q;
    printf("### EX13 - Operadores Bitwise ###\n");
    printf("Digite o primeiro valor: ");
    scanf_s("%i", &p);
    printf("Digite o segundo valor: ");
    scanf_s("%i", &q);
    printf("\n****** Operacoes Bitwise ******\n");
    printf("Calculando %i & %i eh igual a %i\n", p, q, (p & q));
    printf("Calculando %i | %i eh igual a %i\n", p, q, (p | q));
    printf("Calculando %i ^ %i eh igual a %i\n", p, q, (p ^ q));

}
