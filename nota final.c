// Charles Lima de Brito Filho
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL, "Portuguese");
	float a, b;
	printf("Digite a nota do primeiro bimestre: ");
	scanf("%f", &a);
	printf("Digite a nota do segundo bimestre: ");
	scanf("%f", &b);
	printf("Está é a média do semestre é: %.1f", (a*2+b*3)/5);
	return 0;
}
