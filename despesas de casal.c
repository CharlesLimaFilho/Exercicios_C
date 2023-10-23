// Charles Lima de Brito Filho
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL, "Portuguese");
	float a, b;
	printf("Digite o valor das depesas pagas pelo marido: ");
	scanf("%f", &a);
	printf("Digite o valor das depesas pagas pela esposa: ");
	scanf("%f", &b);
	printf("Total : R$%.2f\n", a+b);
	printf("Percentual pago pelo marido: %.2f%%\n", (a/(a+b))*100);
	printf("Percentual pago pele esposa: %.2f%%\n", (b/(a+b))*100);
	printf("Valor devido: R$%.2f\n", (a+b)/2);
	printf("Saldo do marido: R$%.2f\n", (a-(a+b)/2));
	printf("Saldo da esposa: R$%.2f\n", (b-(a+b)/2));
	if (a-(a+b)/2 > b-(a+b)/2) {
		printf("A esposa deve R$%.2f ao marido.", (a-(a+b)/2));
}
	else {
		printf("O marido deve R$%.2f à esposa.", (b-(a+b)/2));
	}
	return 0;
}
