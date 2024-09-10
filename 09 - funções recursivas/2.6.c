/* 2.6) Tente implementar sem olhar o slide. Crie um programa em C, que contenha uma função recursiva e
uma função iterativa para encontrar o n-ésimo elemento da sequência de Fibonnacci. O programa principal
deve solicitar ao usuário qual termo da sequência de Fibonnacci ele deseja conhecer e fazer a impressão
desse termo na tela. Esta sequência começa dos elementos 0 e 1, e todos os outros elementos são a soma
dos dois anteriores. */
#include<stdio.h>
int fibo(int n){
    if(n == 1){
        return 1;
    }else{
        if(n == 2){
            return 1;
        }else{
            return fibo(n-1) + fibo(n-2);
        }
    }
}
int main(void){
    int n, seq;
    scanf("%d", &n);
    printf("%d ", fibo(n));
    return 0;
}
