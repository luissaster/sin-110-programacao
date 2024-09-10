#include<stdio.h>
#include<string.h>

int main(){
    char nome[50];
    int i;
    printf("Digite um nome:\n");
    gets(nome);
    printf("O nome %s tem um tamanho de %d caracteres.\n ", nome, strlen(nome));
    return 0;
}
