/* 2.2 - Faca um algoritmo que leia a matrícula e nota de um aluno e apresente o conceito final.
Como saida, imprima na tela a matricula do aluno e o conceito final. */

#include <stdio.h>

int main(){
	int mat;
	float nota;
	
	printf("Insira sua matricula:\n");
	scanf("%d", &mat);
	printf("Insira sua nota:\n");
	scanf("%f", &nota);
	//Nota maior igual 9 = Conceito A
	if(nota>=9){
		printf("O aluno com a matricula %d e nota %.2f obteve Conceito A em sua nota final.\n", mat, nota);
	}
	//Nota maior igual 8 e menor que 9 = Conceito B
	if(nota>=8 && nota<9){
		printf("O aluno com a matricula %d e nota %.2f obteve Conceito B em sua nota final.\n", mat, nota);
	}	
	//Nota maior igual 6 e menor que 8 Conceito C
	if(nota>=6 && nota<8){
		printf("O aluno com a matricula %d e nota %.2f obteve Conceito C em sua nota final.\n", mat, nota);
	}
	//Nota maior igual a 3 e menor que 6 Conceito D
	if(nota>=3 && nota<6){
		printf("O aluno com a matricula %d e nota %.2f obteve Conceito D em sua nota final.\n", mat, nota);
	}
	//Nota inferior a 3 Conceito E
	if(nota<3){
		printf("O aluno com a matricula %d e nota %.2f obteve Conceito E em sua nota final.\n", mat, nota);
	}
	
	return 0;
}
