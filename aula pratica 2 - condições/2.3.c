/* Codifique, compile e execute um programa em C que leia 2 n�meros reais informados pelo
usu�rio. Em seguida o usu�rio vai escolher entre as op��es do menu a seguir:
1 - Soma
2 - Subtra��o
3 - Multiplica��o
4 - Divis�o
Calcule e mostre o resultado conforme a op��o do menu escolhida. */

#include <stdio.h>

int main(){
	float n1, n2, op;
	int choose_op;
	
	printf("Insira dois numeros:\n");
	scanf("%f%f", &n1, &n2);
	printf("Qual operacao voce quer realizar?\n 1 - Soma\n 2 - Subtracao\n 3 - Multiplicacao\n 4 - Divisao\nDigite o numero da operacao desejada:\n");
	scanf("%d", &choose_op);
	if(choose_op==1){
		op = n1 + n2;
	}
	if(choose_op==2){
		op = n1 - n2;
	}
	if(choose_op==3){
		op = n1 * n2;
	}
	if(choose_op==4){
		op = n1 / n2;
	}
	printf("O resultado da operacao eh: %.2f.\n", op);
	
	return 0;
}
