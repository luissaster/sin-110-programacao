/*2.1 - Faça um programa que dado um número n inteiro, mostre todos os divisores de n. Por
exemplo: se n = 10, os divisores são: 1, 2, 5, 10;


*/

#include <stdio.h>

int main(){
	int i, input;
	printf("Insira um numero inteiro para obter seus divisores:\n");
	scanf("%d", &input);
	printf("Os divisores sao: ");
	for(i=1;i<=input;i++){
		if((input%i)==0){
			printf("%d ", i);
		}
		
	}
	return 0;
}
