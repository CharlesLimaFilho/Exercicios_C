//Charles Lima de Brito Filho
#include <stdio.h>
#include <locale.h>

int main () {
	float x, y;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &x);
	printf("Digite o segundo n�mero: ");
	scanf("%f", &y);
	if (x>y) {
		printf("%f � maior", x);
	} else {
		printf("%f � maior", y);
	}
	return 0;
}
