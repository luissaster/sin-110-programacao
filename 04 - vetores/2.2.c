/* Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i+5*i) % (i+1), isto é,
cada elemento da posição i irá receber o valor resultado da expressão. Em seguida
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
