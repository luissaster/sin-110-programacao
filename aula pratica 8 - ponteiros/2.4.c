/* Crie uma fun��o que recebe como par�metro, um ponteiro para um tipo estruturado Aluno
(que cont�m Nome, Matricula e Nota) e usando esse ponteiro, preencha os dados da vari�vel
aluno que ser� passada como par�metro. Feito isso, crie um programa main com um vetor de 10
alunos onde cada posi��o do vetor ser� preenchida usando a fun��o criada.
Crie outra fun��o que recebe como par�metro o vetor criado e mostre na tela as informa��es
(Nome, Matricula e Nota) do aluno que possui a maior nota dentre os alunos cadastrados. */

#include<stdio.h>
typedef struct sAluno{
    char nome[32];
    int mat;
    float nota;
}aluno;
void preencherAlunos(aluno *p, int n){
    int i;
    for(i=0;i<n;i++){
        printf("Insira o nome do aluno %d:\n", i);
        gets(p[i].nome);
        printf("Insira a matricula do aluno %s:\n", p[i].nome);
        scanf("%d", &p[i].mat);
        printf("Insira a nota do aluno de matricula %d:\n", p[i].mat);
        scanf("%f", &p[i].nota);
        printf("\n");
        fflush(stdin);
    }

}
void maiorNota(aluno *p, int n){
    int mNota, i;
    mNota = p[0].nota;
    for(i=0;i<n;i++){
        if(p[i].nota > mNota){
            mNota = p[i].nota;
        }
    }
    for(i=0;i<n;i++){
        if(mNota == p[i].nota){
            printf("O aluno com maior nota foi:\n");
            printf("Nome - %s\n", p[i].nome);
            printf("Matricula - %d\n", p[i].mat);
            printf("Nota - %.2f", p[i].nota);
        }
    }
}
int main(void){
    aluno alunos[10];
    preencherAlunos(alunos, 10);
    maiorNota(alunos, 10);
    return 0;
}
