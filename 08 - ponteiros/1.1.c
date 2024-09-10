/* 1.1) Escrever e executar um programa em linguagem C que:
i. Crie uma variável do tipo int.
ii. Armazene um valor (número) do tipo inteiro na variável criada.
iii. Crie um ponteiro que apontará para uma variável do tipo int.
iv. Armazene no ponteiro o endereço de memória da variável do tipo int
v. Utilizando o ponteiro (e não a variável do tipo int), mostre na tela o conteúdo da variável
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
