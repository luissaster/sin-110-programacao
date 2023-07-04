/* 1.1) Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação dinâmica de
memória. Em seguida, leia do usuário seus valores, mostre todos eles e por fim mostre quantos dos
números são pares e quantos são ímpares. */
#include<stdio.h>
#include<stdlib.h>
int main(void){
    char* vet;
    int n, i, par=0, imp=0;
    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &n);
    vet = (char*)malloc(n*sizeof(char));
    printf("Digite os valores do vetor:\n");
    for(i=0; i<n; i++){
        printf("valor da posicao %d: ", i);
        scanf("%d", &vet[i]);
    }
    printf("Os valores digitados foram:\n");
    for(i=0;i<n;i++){
        printf("%d ", vet[i]);
        if(vet[i]%2==0){
            par++;
        }else{
            imp++;
        }
    }
    printf("\n");
    printf("Numero de pares: %d\nNumero de impares: %d\n", par, imp);
    free(vet);
    return 0;
}
