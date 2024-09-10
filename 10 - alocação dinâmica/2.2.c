/*Codifique, compile e execute um programa em C que declare na função main uma estrutura para o
cadastro de alunos.
a) Para cada aluno armazenar: matrícula, sobrenome (apenas um), e ano de nascimento;
b) Ao início do programa, o usuário deverá informar o número de alunos que serão armazenados
c) O programa deverá alocar dinamicamente a quantidade necessária de memória para armazenar os
registros dos alunos;
d) O programa deverá pedir ao usuário que entre com as informações dos alunos;
e) Ao final, o programa deve exibir na tela os dados armazenados e liberar a memória alocada.
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct sAluno{
    int mat, anoNasc, choice;
    char surname[21];
}aluno;
int main(void){
    int n, i;
    aluno* vet;
    printf("Insira a quantidade de alunos para serem registrados:\n");
    scanf("%d", &n);
    vet = (aluno*)malloc(n*sizeof(aluno));
    for(i=0; i<n; i++){
        printf("Insira a matricula do aluno de indice %d:\n", i);
        scanf("%d", &vet[i].mat);
        fflush(stdin);
        printf("Insira o sobrenome do aluno de indice %d:\n", i);
        gets(vet[i].surname);
        printf("Insira o ano de nascimento do aluno de indice %d:\n", i);
        scanf("%d", &vet[i].anoNasc);
        printf("\n---------------------------------------------------------\n");
    }
    int choice;
    printf("Gostaria de exibir os dados cadastrados? (1 para SIM / 2 para NAO)\n");
    scanf("%d", &choice);
    printf("\n");
    if(choice == 2){
        free(vet);
        exit(1);
    }else{
        for(i=0; i<n; i++){
            printf("Matricula do aluno de indice %d: %d.\n", i, vet[i].mat);
            printf("Sobrenome do aluno de indice %d: %s.\n", i, vet[i].surname);
            printf("Ano de nascimento do aluno de indice %d: %d.\n", i, vet[i].anoNasc);
            printf("\n---------------------------------------------------------\n");
        }
        free(vet);
        exit(1);
    }
    return 0;
}
