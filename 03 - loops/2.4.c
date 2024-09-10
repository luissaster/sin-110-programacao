/* 2.4 Codifique, compile e execute um programa em C que calcule o fatorial de um número inteiro
qualquer. (ex. 3! = 1 x 2 x 3) */

#include <stdio.h>

int main(){
	int i, input, fat=1;
	printf("Insira um numero para obter sua fatorial:\n");
	scanf("%d", &input);
	for(i=1;i<=input;i++){
		fat = fat*i;	
	}
	printf("O fatorial de %d e: %d.\n", input, fat);
	return 0;
}
