/* 2.2) Codifique, compile e execute um programa em C que contenha uma função que receba como
parâmetro um valor inteiro e gere como saída n linhas com pontos de exclamação, conforme o
exemplo abaixo (para n = 5): */

#include<stdio.h>

void exclamation(int x){
    int i, numLinha;
    for(i=0; i<x; i++){
        for(numLinha=0; numLinha<=i; numLinha++){
            printf("!");
        }
        printf("\n");
    }

}

int main(){
    int qntd;
    printf("Insira a quantidade de linhas:\n");
    scanf("%d", &qntd);
    printf("Aqui esta sua piramide:\n");
    exclamation(qntd);

    return 0;
}
