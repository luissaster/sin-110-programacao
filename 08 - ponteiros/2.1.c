/* Escrever e executar um programa em linguagem C que:
i. Crie uma vari�vel do tipo int.
ii. Armazene um valor (n�mero) do tipo inteiro na vari�vel criada.
iii. Crie um ponteiro �p1� do tipo ponteiro para int.
iv. Crie um ponteiro �p2� tamb�m do tipo ponteiro para int.
v. Armazene no ponteiro �p1� o endere�o de mem�ria da vari�vel do tipo int
vi. Armazene o ponteiro �p1� no ponteiro �p2�. Em outras palavras, p2 recebe p1, s� isso (p2 = p1).
vii. Mostre na tela o conte�do dos endere�os de mem�ria apontados pelos ponteiros p1 e p2. */

#include<stdio.h>

int main(void){
    int v1, *p1, *p2;
    v1 = 734;
    p1 = &v1;
    p2 = p1;
    printf("Variavel 1: %d\n\n", v1);
    printf("Ponteiro 1:\nEndereco - %d\nValor - %d\n\n", p1, *p1);
    printf("Ponteiro 2:\nEndereco - %d\nValor - %d\n\n", p2, *p2);
    return 0;
}
