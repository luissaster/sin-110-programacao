/* Usando a passagem por referência, crie as seguintes funções:
- void preencheVetor(int *vet, int n)
- void imprimeVetor(int *vet, int n)
- int retornaMaiorElemento(int *vet, int n)
Implemente o corpo das 3 funções e crie um vetor na Main com 1000 posições chamando em
seguida cada uma das funções criadas, cujo número de elementos será digitado pelo usuário e
mostrando, quando tiver, seu resultado. */
#include<stdio.h>
void preencheVetor(int *vet, int n){
    int i;
    for(i=0;i<n;i++){
        vet[i] = i+1;
    }
}
void imprimeVetor(int *vet, int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ", vet[i]);
    }
}
int retornaMaiorElemento(int *vet, int n){
    int i;
    int maior = vet[0];
    for(i=0;i<n;i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    return maior;
}
int main(void){
    int vet[1000], n;
    scanf("%d", &n);
    preencheVetor(&vet[1000], n);
    imprimeVetor(&vet[1000], n);
    printf("\nO maior elemento do vetor eh: %d\n", retornaMaiorElemento(&vet[1000], n));
    return 0;
}
