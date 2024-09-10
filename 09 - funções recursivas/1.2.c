#include<stdio.h>
#include<string.h>
void imprime(char* vet, int n){
    if(n==0){
        printf("%c\n", vet[n]);
    }else{
        printf("%c", vet[n]);
        imprime(vet, n-1);
    }
}
int main(void){
    char vet[50];
    gets(vet);
    imprime(vet, strlen(vet) - 1);

    return 0;
}
