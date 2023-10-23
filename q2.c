//Charles Lima de Brito Filho
#include <stdio.h>
#include <locale.h>

int main () {
	int x;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um número: ");
	scanf("%d", &x);
	if (x % 2 == 0) {
		printf("Esse número é par");
	} else {
		printf("Esse número é impar");
	}
	return 0;
}
