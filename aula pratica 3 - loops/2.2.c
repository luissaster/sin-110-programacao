/*2.2 Um n�mero natural � triangular se puder se representado na forma de um tri�ngulo:
Fa�a um algoritmo que imprima os n primeiros n�meros triangulares, onde n � um valor digitado
pelo usu�rio. */

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
