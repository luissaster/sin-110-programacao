/* 1.1) Escrever e executar um programa em linguagem C que:
i. Crie uma vari�vel do tipo int.
ii. Armazene um valor (n�mero) do tipo inteiro na vari�vel criada.
iii. Crie um ponteiro que apontar� para uma vari�vel do tipo int.
iv. Armazene no ponteiro o endere�o de mem�ria da vari�vel do tipo int
v. Utilizando o ponteiro (e n�o a vari�vel do tipo int), mostre na tela o conte�do da vari�vel
 do tipo int (Para a qual o ponteiro se encontra apontando). */

#include<stdio.h>

int main(){
    int num, *p;
    printf("Insira um numero:\n");
    scanf("%d", &num);
    p = &num;
    printf("Valor da variavel: %d.\n", num);
    printf("Valor do endereco de memoria: %d.\n", p);
    printf("Conteudo do endereco de memoria: %d.\n", *p);


    return 0;
}
