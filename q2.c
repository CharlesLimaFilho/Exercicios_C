//Charles Lima de Brito Filho
#include <stdio.h>
#include <locale.h>

int main () {
	int x;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um n�mero: ");
	scanf("%d", &x);
	if (x % 2 == 0) {
		printf("Esse n�mero � par");
	} else {
		printf("Esse n�mero � impar");
	}
	return 0;
}
