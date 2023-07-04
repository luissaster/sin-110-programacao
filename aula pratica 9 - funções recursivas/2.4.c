/* 2.4) Codifique, compile e execute um programa em C que contenha uma fun��o recursiva que mostre na
tela os n�meros pares entre 0 e um n�mero fornecido pelo usu�rio. */
#include<stdio.h>
void pares(int n){
    if(n==0){
        printf("0.\n");
    }else{
        if(n%2==0){
            printf("%d - ", n);
        }
        pares(n-1);
    }
}
int main(void){
    int n;
    printf("Insira um numero:\n");
    scanf("%d", &n);
    printf("Numeros pares entre 0 e %d:\n", n);
    pares(n);
    return 0;
}

/*
    for(i=0;i<n;i++){
        if(i%2 == 0){
            printf("%d ", i);
        }
    }
*/
