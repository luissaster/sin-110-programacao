/* Desenvolva um algoritmo que receba uma temperatura em graus Celsius e apresente na tela o
resultado convertido em graus Fahrenheit. A fórmula de conversão é:
F = C * (9.0 / 5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em graus Celsius. */

#include <stdio.h>

int main(){
	int grausC, grausF;
	printf("Insira a temperatura, na forma de um numero inteiro ou arredondada para tal, em graus Celsius:\n");
	scanf("%d", &grausC);
	grausF = (grausC * (9.0/5.0)) + 32.0; 
	printf("A temperatura convertida para graus Fahrenheit eh: %d.\n", grausF);

	return 0;
}

