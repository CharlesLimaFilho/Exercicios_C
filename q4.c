// Charles Lima de Brito Filho
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL, "Portuguese");
	float a, b;
	printf("Digite a primeira nota: ");
	scanf("%f", &a);
	printf("Digite a segunda nota: ");
	scanf("%f", &b);
	printf("Está é a média: %.1f ", (a+b)/2);
	if ((a+b)/2 >= 6) {
		printf("Aprovado");
	} else {
		printf("Reprovado");
	}
	return 0;
}
