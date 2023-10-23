//Charles Lima de Brito Filho
#include <stdio.h>
#include <locale.h>

int main () {
	float x, y;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o peso do primeiro: ");
	scanf("%f", &x);
	printf("Digite o peso do segundo: ");
	scanf("%f", &y);
	if (x>y) {
		printf("O primeiro é mais pesado");
	} else {
		printf("O segundo é mais pesado");
	}
	return 0;
}
