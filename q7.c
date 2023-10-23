//Charles Lima de Brito Filho
#include <stdio.h>
#include <locale.h>

int main () {
	float x, y, a, b;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a medida do primeiro lado: ");
	scanf("%f", &x);
	printf("Digite a medida do segundo lado: ");
	scanf("%f", &y);
	printf("Digite a medida do terceiro lado: ");
	scanf("%f", &a);
	printf("Digite a medida do quarto lado: ");
	scanf("%f", &b);
	if (x==y && x==a && x==b) {
		printf("É um quadrado");
	} else {
		printf("Não é um quadrado");
	}
	return 0;
}
