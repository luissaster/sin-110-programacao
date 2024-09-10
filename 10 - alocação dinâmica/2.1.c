/* 2.1) Codifique, compile e execute um programa em C que na função principal:
a) Aloque dinamicamente um vetor de 5 números inteiros;
b) Peça ao usuário para digitar os 5 números no espaço alocado;
c) Imprima na tela os 5 números digitados;
d) Libere a memória alocada.
*/
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int n, i;
    int* vet;
    printf("Insira o tamanho do vetor de numeros inteiros:\n");
    scanf("%d", &n);
    vet = (int*)malloc(n*sizeof(int));
    for(i=0; i<n; i++){
        printf("Valor da posicao %d:\n", i);
        scanf("%d", &vet[i]);
    }
    printf("O vetor digitado foi: ");
    for(i=0; i<n; i++){
        printf("%d ", vet[i]);
    }
    free(vet);
    return 0;
}
