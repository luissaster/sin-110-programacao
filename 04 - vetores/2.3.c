/* 2.3. Faça um programa que leia um vetor de 15 posições para números reais e, depois,
um código inteiro.
Se o código for 1, imprima o vetor na ordem direta;
Se for 2, mostre o vetor na ordem inversa.
Caso, o código for diferente de 1 e 2 escreva uma mensagem falando que o código é
inválido. */

#include <stdio.h>

int main(){
	float vet[15];
	int cod, i;
	for(i=0; i<15; i++){
		printf("Insira o valor real da posicao %d:\n", i);
		scanf("%f", &vet[i]);
	}
	do{
		printf("Digite 1 para mostrar os numeros na ordem inserida, ou digite 2 para mostrar na ordem inversa.\n");
		scanf("%d", &cod);
		if(cod==1){
			printf("Os numeros inseridos foram: ");
			for(i=0; i<15; i++){
				if(i!=14){
					printf("%.2f, ", vet[i]);
				}else{
					printf("%.2f.\n", vet[i]);
				}
			}
		}
		if(cod==2){
			printf("Os numeros inseridos na ordem inversa sao: ");
			for(i=14; i>-1; i--){
				if(i!=0){
					printf("%.2f, ", vet[i]);
				}else{
					printf("%.2f.\n", vet[i]);
				}
			}
		}
		if(cod!=1 && cod!=2){
			printf("Codigo invalido!\n");
		}
	}while(cod!=1 && cod!=2);
	return 0;
}
