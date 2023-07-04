/* Escrever e executar um programa em linguagem C que:
i. Declare uma estrutura (struct) para representar uma pessoa contendo as informações
(variáveis):
• nome
• idade
ii. Crie uma variável do tipo da struct declarada;
iii. Preencha as variáveis (os campos) da estrutura com valores do mesmo tipo delas.
Exemplo: “João da silva”, 29;
iv. Crie um ponteiro que apontará para uma variável do tipo da estrutura (struct) criada.
v. Armazene no ponteiro o endereço de memória da estrutura.
vi. Utilizando o ponteiro (e não a variável do tipo da struct), mostre na tela o conteúdo dos
campos “nome” e “idade” da variável tipo da struct (Para a qual o ponteiro se encontra
apontando). */

#include<stdio.h>
#include<string.h>

typedef struct sPessoa{
    char nome[21];
    int idade;
}pessoa;

int main(void){
    pessoa p1, *p;
    //strcpy(p1.nome, "Luis Fernando");
    //p1.idade = 18;
    gets(p1.nome);
    fflush(stdin);
    scanf("%d", &p1.idade);
    p = &p1;
    printf("%s\n", p->nome);
    printf("%d\n", p->idade);
    return 0;
}
