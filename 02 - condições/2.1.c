/* 2.1 - Codifique, compile e execute um programa em C que receba dois números inteiros positivos e
descubra o maior e o menor deles. No final, o programa deve mostrar o maior e o menor dos
números informando para cada um, se o número é par ou impar */

#include <stdio.h>

int main(){
	int n1, n2;
	
	printf("Insira dois numeros inteiros:\n");
	scanf("%d%d", &n1, &n2);
	if(n1>n2){
		//n1 maior e par, n2 menor e par
		if(n1%2==0 && n2%2==0){
			printf("%d eh maior e par.\n%d eh menor e par.\n", n1, n2);
		}
		//n1 maior e par, n2 menor e impar
		else if(n1%2==0 && n2%2!=0){
			printf("%d eh maior e par.\n%d eh menor e impar.\n", n1, n2);
		}
		//n1 maior e impar, n2 menor e impar
		else if(n1%2!=0 && n2%2!=0){
			printf("%d eh maior e impar.\n%d eh menor e impar.\n", n1, n2);
		}
		//n1 maior e impar, n2 menor e par
		else if(n1%2!=0 && n2%2==0){
			printf("%d eh maior e impar.\n%d eh menor e par.\n", n1, n2);
		}
	}
	if(n2>n1){
		//n2 maior e par, n1 menor e par
		if(n2%2==0 && n1%2==0){
			printf("%d eh maior e par.\n%d eh menor e par.\n", n2, n1);
		}
		//n2 maior e par, n1 menor e impar
		else if(n2%2==0 && n1%2!=0){
			printf("%d eh maior e par.\n%d eh menor e impar.\n", n2, n1);
		}
		//n2 maior e impar, n1 menor e impar
		else if(n2%2!=0 && n1%2!=0){
			printf("%d eh maior e impar.\n%d eh menor e impar.\n", n2, n1);
		}
		//n2 maior e impar, n1 menor e par
		else if(n2%2!=0 && n1%2==0){
			printf("%d eh maior e impar.\n%d eh menor e par.\n", n2, n1);
		}
	}
	if(n1==n2){
		if(n1%2==0){
			printf("%d e %d sao iguais e pares.\n", n1, n2);
		} else{
			printf("%d e %d sao iguais e impares.\n", n1, n2);
		}
	}
	
	return 0;
}
