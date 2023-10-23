//Charles Lima de Brito Filho
#include <stdio.h>
#include <locale.h>

int main () {
	float x, y;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o primeiro número: ");
	scanf("%f", &x);
	printf("Digite o segundo número: ");
	scanf("%f", &y);
	if (x>y) {
		printf("%f é maior", x);
	} else {
		printf("%f é maior", y);
	}
	return 0;
}
