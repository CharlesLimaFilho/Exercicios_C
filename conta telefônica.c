// Charles Lima de Brito Filho
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	float c, d;
	printf("Insira quantas liga��es foram feitas: ");
	scanf("%d", &a);
	printf("Insira quantas liga��es foram feitas para outras cidades: ");
	scanf("%d", &b);
	if (b > 90) {
		printf("Voc� excedeu o limite de liga��es interurbanas, portanto ser� aplicada uma taxa de R$0,03 ao excedente.\n");
		printf("O valor total da conta desse m�s ser�: R$%.2f", (b-90)*0.03 + a*0.40 + 21.40);
	}
	else {
		printf("O valor total da conta desse m�s ser�: R$%.2f", a*0.40 + 21.40);
	}
	return 0;
}
