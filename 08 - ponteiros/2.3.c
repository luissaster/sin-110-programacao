/* Usando a passagem por refer�ncia, crie as seguintes fun��es:
- void preencheVetor(int *vet, int n)
- void imprimeVetor(int *vet, int n)
- int retornaMaiorElemento(int *vet, int n)
Implemente o corpo das 3 fun��es e crie um vetor na Main com 1000 posi��es chamando em
seguida cada uma das fun��es criadas, cujo n�mero de elementos ser� digitado pelo usu�rio e
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
