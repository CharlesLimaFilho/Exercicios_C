// Charles Lima de Brito Filho
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	printf("Digite o primeiro número: ");
	scanf("%d", &a);
	printf("Digite o segundo número: ");
	scanf("%d", &b);
	printf("Digite o terceiro número: ");
	scanf("%d", &c);
	printf("Está é a média aritmédica: %d", (a+b+c)/3);
	return 0;
}
