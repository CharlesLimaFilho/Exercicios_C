// Charles Lima de Brito Filho
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL, "Portuguese");
	int a, b, c, d;
	printf("Digite o primeiro n�mero: ");
	scanf("%d", &a);
	printf("Digite o segundo n�mero: ");
	scanf("%d", &b);
	printf("Digite o terceiro n�mero: ");
	scanf("%d", &c);
	printf("Digite o quarto n�mero: ");
	scanf("%d", &d);
	printf("%d %d %d %d\n", a, b, c, d);
	printf("%d %d %d %d", a+1, b+1, c+1, d+1);
	return 0;
}
