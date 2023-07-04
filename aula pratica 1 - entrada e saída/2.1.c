/* Codifique, compile e execute um programa em C que leia três numeros inteiros e mostre-os na tela */ 

#include <stdio.h>

int main(){
	int n1, n2, n3;
	printf("Insira, na mesma linha e separados por espaco, tres numeros inteiros:\n");
	scanf("%d%d%d", &n1, &n2, &n3);
	printf("Os numeros inseridos foram: %d, %d e %d.\n", n1, n2, n3);
	
	return 0;
}
