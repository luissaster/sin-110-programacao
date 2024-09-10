#include<stdio.h>
int busca_maior(int* vet, int n){
    if(n==0){
        return vet[n];
    }else{
        int maiorAux = busca_maior(vet, n-1);
        if(maiorAux>vet[n]){
            return maiorAux;
        }else{
            return vet[n];
        }
    }
}
int main(void){
    int vet[10], i, maior;
    printf("Digite os elementos do vetor:\n");
    for(i=0;i<10;i++){
        scanf("%d", &vet[i]);
    }
    maior = busca_maior(vet, 9);
    printf("O maior elemento do vetor eh: %d.\n", maior);
    return 0;
}
