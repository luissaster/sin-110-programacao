/* 2.1) Crie uma fun��o que receba como par�metro apenas um n�mero inteiro e retorne o seu
dobro. Essa fun��o deve ser chamada na fun��o main que dever� receber tr�s n�meros inteiros do
usu�rio e imprimir os valores calculados de acordo com os retornos das chamadas da fun��o. */


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
