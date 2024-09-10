/* ) Codifique, compile e execute um programa em C que defina uma estrutura para armazenar um
cadastro de cliente: nome, idade e telefone. Pergunte ao usuário o número de clientes e aloque
dinamicamente na memória a quantidade de estruturas necessárias. Em seguida, crie duas funções: a
primeira deverá ler os dados dos clientes e a segunda imprimir as informações cadastradas. */
#include<stdio.h>
#include<stdlib.h>
typedef struct sCliente{
    char nome[32], telefone[11];
    int idade;
}cliente;
void dados_cliente(cliente* vet, int n){
    int i;
    for(i=0; i<n; i++){
        fflush(stdin);
        printf("Insira o nome do cliente de indice %d:\n", i);
        gets(vet[i].nome);
        printf("Insira a idade do cliente de indice %d:\n", i);
        scanf("%d", &vet[i].idade);
        fflush(stdin);
        printf("Insira o telefone do cliente de indice %d:\n", i);
        gets(vet[i].telefone);
        printf("\n---------------------------------------------------------\n");
    }
}
void mostrar_dados_cliente(cliente* vet, int n){
    printf("Os clientes cadastrados foram:\n");
    int i;
    for(i=0; i<n; i++){
        printf("Cliente %d:\n", i);
        printf("Nome: %s.\n", vet[i].nome);
        printf("Idade: %d.\n", vet[i].idade);
        printf("Telefone: %s.\n", vet[i].telefone);
        printf("\n---------------------------------------------------------\n");
    }
}
int main(void){
    int n;
    cliente* vet;
    printf("Quantos clientes deseja registrar?\n");
    scanf("%d", &n);
    vet = (cliente*)malloc(n*sizeof(cliente));
    dados_cliente(vet, n);
    mostrar_dados_cliente(vet, n);
    free(vet);
    return 0;
}
