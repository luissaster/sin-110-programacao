/* Codifique, compile e execute um programa em C que receba o sal�rio de um funcion�rio, calcule e
mostre o novo sal�rio, sabendo-se que este sofreu um aumento de 25%. */

#include <stdio.h>

int main(){
	float rise = 0.25;
	float wage,newWage;
	printf("Insira o valor do salario atual:\n");
	scanf("%f", &wage);
	newWage = wage * rise + wage;
	printf("Apos o aumento, o novo salario sera no valor de: %.2f.\n", newWage);
	
	return 0;
}
