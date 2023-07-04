#include<stdio.h>
int soma(int n){
    if(n==1){
        return 1;
    }else{
        return n + soma(n-1);
    }
}
int main(void){
    int n, resultado;
    scanf("%d", &n);
    resultado = soma(n);
    printf("Resultado da soma de 1 ate %d: %d.\n", n, resultado);
    return 0;
}

