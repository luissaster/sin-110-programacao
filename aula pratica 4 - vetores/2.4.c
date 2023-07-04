/* Leia um vetor de char de 10 posições. Em seguida mostre apenas as vogais lidas e
depois mostre apenas as consoantes lidas. */

#include <stdio.h>

void main(void){
	char vet[10];
	int i;
	printf("Insira as 10 letras:\n");
	for(i=0; i<10; i++){
		scanf("%c", &vet[i]);
		fflush(stdin);
	}
	for(i=0; i<10; i++){
		if(vet[i] == 'a' || vet[i] == 'A' || vet[i] == 'e' || vet[i] == 'E' || vet[i] == 'i' || vet[i] == 'I' || vet[i] == 'o' || vet[i] == 'O' || vet[i] == 'u' || vet[i] == 'U'){
			printf("%c ", vet[i]);
		}
	}
	printf("\n");
	for(i=0; i<10; i++){
		if(vet[i] != 'a' && vet[i] != 'A' && vet[i] != 'e' && vet[i] != 'E' && vet[i] != 'i' && vet[i] != 'I' && vet[i] != 'o' && vet[i] != 'O' && vet[i] != 'u' && vet[i] != 'U'){
			printf("%c ", vet[i]);
		}
	}
}
