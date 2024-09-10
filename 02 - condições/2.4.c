/* Codifique, compile e execute um programa em C que receba o código de consumo energético
de aparelhos e mostre quais aparelhos possuem aquela classificação segundo a “tabela do
inmetro”: 
A = Ventilador, Televisao
B = Aparelho de Som, Batedeira
C = Fogao eletrico, Liquidificador
D = Freezer, Geladeira, Maquina de Lavar
E = Ar-condicionado, Micro-ondas
*/

#include <stdio.h>

int main(){
	char cod;
	
	printf("Insira o codigo do aparelho:\n");
	scanf("%c", &cod);
	if(cod=='a' || cod=='A'){
		printf("Os aparelhos com o codigo A sao: Ventilador, Televisao.\n");
	}
	else if(cod=='b' || cod=='B'){
		printf("Os aparelhos com o codigo B sao: Aparelho de som, Batedeira.\n");
	}
	else if(cod=='c' || cod=='C'){
		printf("Os aparelhos com o codigo C sao: Fogao eletrico, Liquidificador.\n");
	}
	else if(cod=='d' || cod=='D'){
		printf("Os aparelhos com o codigo D sao: Freezer, Geladeira, Maquina de Lavar.\n");
	}
	else if(cod=='e' || cod=='E'){
		printf("Os aparelhos com o codigo E sao: Ar-condicionado, Micro-ondas.\n");
	}
	else{
		printf("Codigo invalido!");
	}
	
	return 0;
}
