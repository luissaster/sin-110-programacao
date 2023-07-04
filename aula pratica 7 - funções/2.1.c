/* 2.1) Crie uma função que receba como parâmetro apenas um número inteiro e retorne o seu
dobro. Essa função deve ser chamada na função main que deverá receber três números inteiros do
usuário e imprimir os valores calculados de acordo com os retornos das chamadas da função. */


#include<stdio.h>

int dobro(int x){
    x *= 2;
    return x;
}

int main(){
    int n1, n2, n3;
    printf("Insira 3 numeros:\n");
    scanf("%d%d%d", &n1, &n2, &n3);
    printf("Dobro de %d: %d\nDobro de %d: %d\nDobro de %d: %d\n", n1, dobro(n1), n2, dobro(n2), n3, dobro(n3));
    return 0;
}
