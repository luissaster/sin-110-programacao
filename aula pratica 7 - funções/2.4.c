/* 2.4) Faça uma função que receba como parâmetro apenas um número inteiro positivo n e retorne
o seu fatorial n!. */

#include<stdio.h>

int fat(int n){
    if(n==0){
        return 1;
    }else{
        return n*fat(n-1);
    }

}

int main(){
    int n;
    printf("Insira um numero para ser fatorado:\n");
    scanf("%d", &n);
    printf("A fatorial de %d eh: %d", n, fat(n));
    return 0;
}
