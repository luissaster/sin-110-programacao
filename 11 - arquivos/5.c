/* Codifique, compile e execute um programa em C que leia a profissão e o tempo de
serviço (em anos), de cada um dos 50 funcionários de uma empresa e armazene-os no
arquivo “emp.txt”. Cada linha do arquivo corresponde aos dados de um funcionário. Utilize
o comando fprintf(). Em seguida, leia o mesmo arquivo utilizando fscanf() e apresente os
dados na tela. */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct sFuncionario{
    char profissao[32];
    int t_servico;
}funcionario;
int main(void){
    funcionario funcionarios[2];
    FILE *p_arq;
    int i, temp;
    char prof[32];
    p_arq = fopen("emp.txt", "w+");
    if(p_arq == NULL){
        printf("Erro ao criar o arquivo. Tente novamente.\n");
        exit(1);
    }else{
        printf("Arquivo criado com sucesso.\n");
    }
    for(i=0; i<2; i++){
        printf("Digite a profissao do funcionario %d: ", i);
        gets(funcionarios[i].profissao);
        printf("Digite o tempo de servico, em anos, do funcionario %d: ");
        scanf("%d", &funcionarios[i].t_servico);
        fflush(stdin);
    }
    for(i=0; i<2; i++){
        fprintf(p_arq, "%s %d\n", funcionarios[i].profissao, funcionarios[i].t_servico);
    }
    rewind(p_arq);
    for(i=0; i<2; i++){
        fscanf(p_arq, "%s", prof);
        printf("%s ", prof);
        fscanf(p_arq, "%d", &temp);
        printf("%d.\n", temp);
    }
    fclose(p_arq);
    return 0;
}
