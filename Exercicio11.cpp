#include <stdio.h>

void main() {
	int num;
	float resto;
	printf_s("Digite um numero qualquer: ");
	scanf_s("%d", & num);
	resto = (num % 2);
	printf("O numero que voce digitou eh: %s", (resto == 0)?"PAR":"IMPAR");
}