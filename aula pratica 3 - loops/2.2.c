/*2.2 Um número natural é triangular se puder se representado na forma de um triângulo:
Faça um algoritmo que imprima os n primeiros números triangulares, onde n é um valor digitado
pelo usuário. */

#include <stdio.h>

int main(){
	int i, input, num;
	printf("Insira quantos numeros triangulares deseja ver:\n");
	scanf("%d", &input);
	printf("Os %d primeiros numeros triangulares sao: ", input);
	for(i=1;i<=input;i++){
		num = ((i*(i+1))/2);
		printf("%d ", num);
	} 
	return 0;
}
