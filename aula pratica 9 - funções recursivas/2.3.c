/*2.3) Codifique, compile e execute um programa em C que contenha uma função recursiva que imprima em
ordem crescente os elementos de um vetor de 50 alunos (nome, matrícula, CR).*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct sAlunos{
    char nome[50];
    int mat;
    float cr;
}aluno;
void info(aluno *vet, int n){
    if(n==49){
        printf("Info do aluno %d:\n", n+1);
        printf("Nome: %s.\n", vet[n].nome);
        printf("Matricula: %d.\n", vet[n].mat);
        printf("CR: %.2f.\n", vet[n].cr);
        printf("Fim dos alunos.\n");
    }else{
        printf("Info do aluno %d:\n", n+1);
        printf("Nome: %s.\n", vet[n].nome);
        printf("Matricula: %d.\n", vet[n].mat);
        printf("CR: %.2f.\n", vet[n].cr);
        printf("-----------------------------------------------\n");
        info(vet, n+1);
    }
}
int main(void){
    int i;
    aluno alunos[50];
    for(i=0; i<50; i++){
        printf("Insira o nome do %d aluno:\n", i+1);
        gets(alunos[i].nome);
        printf("Insira a matricula do aluno %s:\n", alunos[i].nome);
        scanf("%d", &alunos[i].mat);
        printf("Insira o CR do aluno de matricula %d:\n", alunos[i].mat);
        scanf("%f", &alunos[i].cr);
        fflush(stdin);
        printf("-----------------------------------------------\n");
    }
    info(alunos, 0);
    return 0;
}
