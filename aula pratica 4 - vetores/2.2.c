/* Fa�a um vetor de tamanho 50 preenchido com o seguinte valor: (i+5*i) % (i+1), isto �,
cada elemento da posi��o i ir� receber o valor resultado da express�o. Em seguida
imprima o vetor na tela. */

#include <stdio.h>

int main(){
	int vet[50], i;
	for(i=0; i<50; i++){
		vet[i]=(i+5*i)%(i+1);
	}
	for(i=0; i<50; i++){
		printf("vet[%d] = %d\n", i, vet[i]);
	}
	return 0;
}
