/* 2.5 Deseja-se fazer uma pesquisa a respeito das notas de alunos de uma turma, que possui 15
alunos. Para isto, deve ser lida a seguinte informação:
- a nota de cada aluno, sendo esta um valor real.
A pesquisa termina após a leitura das notas para os 15 alunos e, em seguida calcula e exibe os
seguintes dados:
- a nota média do conjunto de alunos
- a maior nota do conjunto de alunos
- a menor nota do conjunto de alunos */

#include <stdio.h>

int main(){
	int alunos=15, i=1;
	float nota, notaTotal = 0, mediaTotal = 0, maiorNota = 0, menorNota = 9999, notaAtual;
	printf("Insira a nota dos %d alunos para obter a media, a maior e a menor nota.\n", alunos);
	system("pause");
 	while(i<=alunos){
 		printf("Insira a nota do aluno %d:\n", i);
 		scanf("%f", &nota);
 		notaAtual = nota;
 		if(notaAtual>maiorNota){
 			maiorNota=notaAtual;
		} else if(notaAtual<menorNota){
			menorNota=notaAtual;
		}
		
 		notaTotal = notaTotal + nota;
		i++;
	}
	mediaTotal = notaTotal/alunos;
	printf("A nota media da turma foi de: %.2f.\n", mediaTotal);
	printf("A maior nota da turma foi: %.2f.\n", maiorNota);
	printf("A menor nota da turma foi: %.2f.\n", menorNota);

	
	return 0;
}
