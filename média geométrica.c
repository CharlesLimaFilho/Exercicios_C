// Charles Lima de Brito Filho
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL, "Portuguese");
	float a, b, c;
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &a);
	printf("Digite o segundo n�mero: ");
	scanf("%f", &b);
	printf("Digite o terceiro n�mero: ");
	scanf("%f", &c);
	printf("Est� � a m�dia geom�trica: %.1f", (a*b*c)/3);
	return 0;
}
