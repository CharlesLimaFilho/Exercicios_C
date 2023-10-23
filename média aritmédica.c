// Charles Lima de Brito Filho
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL, "Portuguese");
	float a, b, c;
	printf("Digite a primeira nota: ");
	scanf("%f", &a);
	printf("Digite a segunda nota: ");
	scanf("%f", &b);
	printf("Digite a terceira nota: ");
	scanf("%f", &c);
	printf("Está é a média: %.1f", (a+b+c)/3);
	return 0;
}
