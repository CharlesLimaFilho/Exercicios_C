//Charles Lima de Brito Filho
#include <stdio.h>
#include <locale.h>

int main () {
	float x, y;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a altura do primeiro: ");
	scanf("%f", &x);
	printf("Digite a altura do segundo: ");
	scanf("%f", &y);
	if (x>y) {
		printf("O primeiro é maior");
	} else {
		printf("O segundo é maior");
	}
	return 0;
}
