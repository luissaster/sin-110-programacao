/* Codifique, compile e execute um programa em C que leia o nome completo do usu�rio e
armazene em um vetor de 50 posi��es. Em seguida, o sistema deve exibir o tamanho da string
fornecida. (N�o utilize fun��es prontas da biblioteca string.h) */

#include<stdio.h>
int main(){
    char nome[50];
    int i, count=0;
    printf("Digite um nome:\n");
    gets(nome);
    for(i=0; i<50; i++){
        if(nome[i] != '\0'){
            count++;
        }else{
            break;
        }
    }
    printf("O nome %s tem um tamanho de %d caracteres.\n ", nome, count);
    return 0;
}
