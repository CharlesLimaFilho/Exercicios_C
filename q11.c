//Charles Lima de Brito Filho
#include <stdio.h>
#include <locale.h>

int main () {
	int x;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a sua idade: ");
	scanf("%d", &x);
	if (x >= 16 && x <= 69) {
		printf("Voc� pode doar sangue");
	} else {
		printf("Voc� n�o pode doar sangue");
	}
	return 0;
}
