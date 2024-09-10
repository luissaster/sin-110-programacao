/* 2.5) Crie um programa em C, que contenha uma fun��o para preencher recursivamente um vetor de
inteiros de 10 posi��es. Em seguida fa�a outra fun��o para imprimir recursivamente o mesmo vetor. */
#include<stdio.h>
#include<stdlib.h>
void preencher(int* vet, int i){
    if(i == 9){
        vet[i] = rand();
    }else{
        vet[i] = rand();
        preencher(vet, i+1);
    }
}
void imprimir(int* vet, int i){
    if(i == 9){
        printf("%d.\n", vet[i]);
    }else{
        printf("%d ", vet[i]);
        imprimir(vet, i+1);
    }
}
int main(void){
    int vet[10];
    preencher(vet, 0);
    imprimir(vet, 0);
    return 0;
}
