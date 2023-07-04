/* 2.1) Codifique, compile e execute um programa em C que implemente uma função recursiva que mostre na
tela os números inteiros de 1 a 10 em ordem decrescente. */

#include<stdio.h>
void numbers(int n){
    if(n==1){
        printf("%d\n", n);
    }else{
        printf("%d ", n);
        numbers(n-1);
    }
}
int main(void){
    numbers(10);
    return 0;
}
