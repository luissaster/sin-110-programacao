/* 2.7) Crie um programa que contenha uma funçao recursiva para encontrar o menor elemento em um vetor.
A leitura dos elementos do vetor e impressão do menor elemento devem ser feitas no programa principal. */
#include<stdio.h>
int menor(int* vet, int n, int menorEl){
    if(n == 9){
        if(vet[n] < menorEl){
            menorEl = vet[n];
        }
        return menorEl;
    }else{
        if(vet[n] < menorEl){
            menorEl = vet[n];
        }
        menor(vet, n+1, menorEl);
    }
}
int main(void){
    int vet[10], i;
    for(i=0; i<10; i++){
        scanf("%d", &vet[i]);
    }
    for(i=0; i<10; i++){
        printf("%d ", vet[i]);
    }
    printf("\nO menor elemento do vetor eh:  %d.\n", menor(vet, 0, vet[0]));
    return 0;
}
