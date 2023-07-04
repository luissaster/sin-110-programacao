/* Defina uma struct para representar um Funcionario de um supermercado contendo os
campos de nome, idade e salário. Crie na função main, dois funcionários e um ponteiro para o tipo
Funcionario, digite as informações de ambos e depois faça a impressão dos campos de cada um
usando o ponteiro.  */

#include<stdio.h>

typedef struct sFuncionario{
    char nome[30];
    int idade;
    float salario;
}funcionario;

int main(void){
    funcionario p1, p2;
    funcionario *p;

    printf("Informe o nome do funcionario 1:\n");
    gets(p1.nome);
    fflush(stdin);
    printf("Insira a idade do funcionario 1:\n");
    scanf("%d", &p1.idade);
    fflush(stdin);
    printf("Insira o salario do funcionario 1:\n");
    scanf("%f", &p1.salario);
    fflush(stdin);

    printf("Informe o nome do funcionario 2:\n");
    gets(p2.nome);
    fflush(stdin);
    printf("Insira a idade do funcionario 2:\n");
    scanf("%d", &p2.idade);
    fflush(stdin);
    printf("Insira o salario do funcionario 1:\n");
    scanf("%f", &p2.salario);
    fflush(stdin);
    p = &p1;
    printf("Dados do funcionario 1:\n");
    printf("Nome: %s.\n", p->nome);
    printf("Idade: %d.\n", p->idade);
    printf("Salario: %.2f.\n", p->salario);
    p = &p2;
    printf("Dados do funcionario 2:\n");
    printf("Nome: %s.\n", p->nome);
    printf("Idade: %d.\n", p->idade);
    printf("Salario: %.2f.\n", p->salario);

    return 0;
}
