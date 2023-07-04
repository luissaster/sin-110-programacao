/* 2.2) Codifique, compile e execute um programa em C que contenha uma função recursiva que imprima os
elementos de um vetor de vogais em ordem crescente. */
#include<stdio.h>
#include<string.h>
void vetorCrescente(char* vet, int n){
    if(n==strlen(vet+1)){
        printf("%c.\n", vet[n]);
    }else{
        printf("%c", vet[n]);
        vetorCrescente(vet, n+1);
    }
}
int main(void){
    char vet[50];
    printf("Insira uma palavra:\n");
    gets(vet);
    vetorCrescente(vet,0);
    return 0;
}
