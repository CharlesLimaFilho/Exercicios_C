//Charles Lima de Brito Filho
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	float x, y, imc;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a sua altura(em metros): ");
	scanf("%f", &y);
	printf("Digite o seu peso(em kg): ");
	scanf("%f", &x);
	imc = x/pow(y, 2);
	printf("Seu IMC é: %.2f ", imc);
	if (imc <= 18.49) {
		printf("Você está abaixo do peso");
	} else if (imc >= 18,50 && imc < 24.99) {
		printf("Você está com peso normal");
	} else {
		printf("Você está acima do peso");
	}
	return 0;
}
