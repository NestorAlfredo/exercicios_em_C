#include<stdio.h>

void main() {
	float n1, n2, media;
	printf("Digite a primeira nota: ");
	scanf_s("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf_s("%f", &n2);
	media = (n1 + n2) / 2;
	printf("A media do aluno foi : %.1f", media);
	printf("\nA situacao do aluno e %s", (media >= 7) ? "Aprovado" : "Reprovado");
}