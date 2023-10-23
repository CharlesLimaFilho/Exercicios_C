// Charles Lima de Brito Filho
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL, "Portuguese");
	float a, b, c;
	printf("Digite o primeiro número: ");
	scanf("%f", &a);
	printf("Digite o segundo número: ");
	scanf("%f", &b);
	printf("Digite o terceiro número: ");
	scanf("%f", &c);
	printf("Está é a média geométrica: %.1f", (a*b*c)/3);
	return 0;
}
