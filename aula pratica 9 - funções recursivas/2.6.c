/* 2.6) Tente implementar sem olhar o slide. Crie um programa em C, que contenha uma fun��o recursiva e
uma fun��o iterativa para encontrar o n-�simo elemento da sequ�ncia de Fibonnacci. O programa principal
deve solicitar ao usu�rio qual termo da sequ�ncia de Fibonnacci ele deseja conhecer e fazer a impress�o
desse termo na tela. Esta sequ�ncia come�a dos elementos 0 e 1, e todos os outros elementos s�o a soma
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
