// Charles Lima de Brito Filho
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	printf("Digite o primeiro n�mero: ");
	scanf("%d", &a);
	printf("Digite o segundo n�mero: ");
	scanf("%d", &b);
	printf("Digite o terceiro n�mero: ");
	scanf("%d", &c);
	printf("Est� � a m�dia aritm�dica: %d", (a+b+c)/3);
	return 0;
}
