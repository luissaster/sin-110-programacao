/* Leia um vetor inteiro de 10 posições. Conte e escreva quantos valores pares e
ímpares ele possui. */

#include <stdio.h>

int main(){
	int vet[10], qntdPar=0, qntdImp=0, i;
	for(i=0; i<10; i++){
		printf("Insira o %d valor:\n", i+1);
		scanf("%d", &vet[i]);
	}
	for(i=0; i<10; i++){
		if(vet[i]%2==0){
			qntdPar++;
		}else{
			qntdImp++;
		}
	}
	printf("Os numeros digitados foram: ");
	for(i=0; i<10; i++){
		if(i!=9){
			printf("%d, ", vet[i]);
		}else{
			printf("%d. \n", vet[i]);
		}
	}
	printf("Desses numeros, %d sao pares e %d sao impares.\n", qntdPar, qntdImp);

    return 0;
}
