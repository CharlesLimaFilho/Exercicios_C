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
		printf("O primeiro � maior");
	} else {
		printf("O segundo � maior");
	}
	return 0;
}
