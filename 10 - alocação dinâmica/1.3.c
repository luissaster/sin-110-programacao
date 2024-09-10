/*  1.3) Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de dimensões definidas pelo
usuário. Em seguida, preencha as posições da matriz e imprima todos os elementos. No fim, crie uma
função que receba um valor e, retorne 1 caso o valor esteja na matriz ou retorne 0 caso não esteja na matriz
e teste essa função. */
#include<stdio.h>
#include<stdlib.h>
int busca(int** mat, int v, int m, int n){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(mat[i][j] == v){
                return 1;
            }
        }
    }
}
int main(void){
    int** mat;
    int n, m, i, j, valor;
    printf("Digite as dimensoes da matriz:\n");
    printf("Linhas: ");
    scanf("%d", &n);
    printf("Colunas: ");
    scanf("%d", &m);
    printf("Insira os valores da matriz de %dx%d:\n", n, m);
    mat = (int**)malloc(n*sizeof(int*));
    for(i=0; i<n; i++){
        mat[i] = (int*)malloc(m*sizeof(int));
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Sua matriz esta preenchida como:\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("Digite um valor: ");
    scanf("%d", &valor);
    if(busca(mat, valor, m, n) == 1){
        printf("Elemento esta presente na matriz.\n");
    }else{
        printf("Elemento nao esta presenta na matriz.\n");
    }
    for(i=0; i<n; i++){
        free(mat[i]);
    }
    free(mat);
    return 0;
}
