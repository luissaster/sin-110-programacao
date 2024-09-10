/* Faça um programa que aloque dinâmicamente um vetor de n inteiros, sendo n digitado pelo usuário.
Faça as seguintes funções:
(a) Preenche o vetor criado.
(b) Imprime o vetor criado.
(c) Retorna o maior elemento par.
(d) Retorna o menor elemento impar.
(e) Retorna a média dos N elementos. */
#include<stdio.h>
#include<stdlib.h>
int primeiro_maior_par(int* vet, int n){
    if(vet[n]%2 == 0){
        return vet[n];
    }else{
        primeiro_maior_par(vet, n+1);
    }
}
int primeiro_menor_impar(int* vet, int n){
    if(vet[n]%2 != 0){
        return vet[n];
    }else{
        primeiro_menor_impar(vet, n+1);
    }
}
int main(void){
    int n, *vet, i, maiorPar, menorImp;
    float mediaTotal, mediaSoma=0;
    printf("Qual o tamanho do vetor de inteiros?\n");
    scanf("%d", &n);
    vet = (int*)malloc(n*sizeof(int));
    //ler os valores
    for(i=0; i<n; i++){
        printf("Valor do indice %d:\n", i);
        scanf("%d", &vet[i]);
    }
    printf("O vetor digitado foi: ");
    //imprimir os valores
    for(i=0; i<n; i++){
        printf("%d ", vet[i]);
    }
    //retornar o maior par
    maiorPar = primeiro_maior_par(vet, 0);
    for(i=0; i<n; i++){
        if(vet[i] > maiorPar && vet[i]%2 == 0){
            maiorPar = vet[i];
        }
    }

    printf("\nMaior numero par: %d.\n", maiorPar);
    //retornar menor impar
    menorImp = primeiro_menor_impar(vet, 0);
    for(i=0; i<n; i++){
        if(vet[i] < menorImp && vet[i]%2 != 0){
            menorImp = vet[i];
        }
    }
    printf("Menor numero impar: %d.\n", menorImp);
    //retornar media
    for(i=0; i<n; i++){
        mediaSoma = mediaSoma + vet[i];
    }
    mediaTotal = mediaSoma/n;
    printf("Media dos elementos: %.2f.\n", mediaTotal);
    free(vet);
    return 0;
}
