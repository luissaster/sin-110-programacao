/* 1.1) Fa�a um programa que leia do usu�rio o tamanho de um vetor a ser lido e fa�a a aloca��o din�mica de
mem�ria. Em seguida, leia do usu�rio seus valores, mostre todos eles e por fim mostre quantos dos
n�meros s�o pares e quantos s�o �mpares. */
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
