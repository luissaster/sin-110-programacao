/* Codifique, compile e execute um programa em C que leia o nome completo do usuário e
armazene em um vetor de 50 posições. Em seguida, o sistema deve exibir o tamanho da string
fornecida. (Não utilize funções prontas da biblioteca string.h) */

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
