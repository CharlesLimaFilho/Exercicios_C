//Charles Lima de Brito Filho
#include <stdio.h>
#include <locale.h>
float x, y;

void soma() {
	printf("Digite o n1: ");
	scanf("%f", &x);
	printf("Digite o n2: ");
	scanf("%f", &y);
	printf("A soma é = %.2f\n", x + y);
}

void subt() {
	printf("Digite o n1: ");
	scanf("%f", &x);
	printf("Digite o n2: ");
	scanf("%f", &y);
	printf("A subtração é = %.2f\n", x - y);
}

void mult() {
	printf("Digite o n1: ");
	scanf("%f", &x);
	printf("Digite o n2: ");
	scanf("%f", &y);
	printf("A multiplicação é = %.2f\n", x * y);
}

void div() {
	printf("Digite o n1: ");
	scanf("%f", &x);
	printf("Digite o n2: ");
	scanf("%f", &y);
	printf("A divisão é = %.2f\n", x / y);
}

int main () {
	int op;
	setlocale(LC_ALL, "Portuguese");
	printf("Para realizar uma soma digite [1]\n");
	printf("Para realizar uma subtração digite [2]\n");
	printf("Para realizar uma multiplicação digite [3]\n");
	printf("Para realizar uma divisão digite [4]\n");
	scanf("%d", &op);
	switch (op) {
		case 1 : soma(); break;
		case 2 : subt(); break;
		case 3 : mult(); break;
		case 4 : div(); break;
		default : return 0; break;
	}
	system("pause");
	return 0;
}
