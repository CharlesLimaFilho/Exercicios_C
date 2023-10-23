//Charles Lima de Brito Filho
#include <stdio.h>
#include <locale.h>

int main () {
	int x;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a sua idade: ");
	scanf("%d", &x);
	if (x >= 16 && x <= 69) {
		printf("Você pode doar sangue");
	} else {
		printf("Você não pode doar sangue");
	}
	return 0;
}
