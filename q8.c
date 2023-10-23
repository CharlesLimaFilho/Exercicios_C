//Charles Lima de Brito Filho
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float a, b, c;
	printf("Digite o primeiro número: ");
	scanf("%f", &a);
	printf("Digite o segundo número: ");
	scanf("%f", &b);
	printf("Digite o terceiro número: ");
	scanf("%f", &c);
	if (a>=b && a > c && b>= c) {
		printf("%f\n%f\n%f\n", c, b, a);
	} else if (a>= b && a > c && c>= b) {
		printf("%f\n%f\n%f\n", b, c, a);
	} else if (b>=a && b > c&& a>= c) {
		printf("%f\n%f\n%f\n", c, a, b);
	} else if (b>= a && b > c&& c>= a) {
		printf("%f\n%f\n%f\n", a, c, b);
	} else if (c>=a && c > b && a>= b) {
		printf("%f\n%f\n%f\n", b, a, c);
	} else if (c>= b && c > a && b>= a) {
		printf("%f\n%f\n%f\n", a, b, c);
	} else {
		printf("%f\n%f\n%f\n", a, b, c);
	}
}
