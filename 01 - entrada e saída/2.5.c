/* Desenvolva um algoritmo que receba dois n�meros inteiros quaisquer em duas vari�veis e inverta os
valores das vari�veis. */

#include <stdio.h>

int main(){
	int n1, n2, holder;
	printf("Insira dois numeros inteiros:\n");
	scanf("%d%d", &n1, &n2);
	holder = n1;
	n1 = n2;
	n2 = holder;
	printf("Os numeros em ordem inversa sao: %d e %d.\n", n1, n2);

	return 0;
}

