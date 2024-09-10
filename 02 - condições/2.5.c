/* O número 3025 tem uma propriedade interessante:
30 + 25 = 55, e 55^2 = 3025.
Faça um programa para ler um número de 4 algarismos (entre 1000 e 9999 inclusive) e dizer se ele possui essa propriedade ou não. 

30 = 3025/100 = 30,25 = arredondado para 30
25 = 3025%100 = 25

30+25 = 55
55^2 = 3025

entao: (numero/100 + numero%100) x (numero/100 + numero%100) = numero 

*/

#include <stdio.h>

int main(){
	int numero;
	
	printf("Insira um numero inteiro e positivo de quatro algarismos (entre 1000 e 9999):\n");
	scanf("%d", &numero);
	if(numero == (((numero/100)+(numero%100))*((numero/100)+(numero%100)))){
		printf("O numero %d apresenta a propriedade desejada: %d+%d=%d ===> %d^2=%d.\n", numero, numero/100, numero%100, (numero/100)+ (numero%100), (numero/100)+(numero%100), numero);
	} else{
		printf("O numero %d nao apresenta a propriedade desejada!\nObs.: apenas os numeros 2025, 3025 e 9801 possuem a propriedade desejada.\n", numero);
	}
	
	return 0;
}

/* codigo para descobrir os numeros com essa propriedade:
#include <stdio.h>

int main()
{
    int numero=1000;
    
    while(numero <= 9999){
    	if(numero == (((numero/100)+(numero%100))*((numero/100)+(numero%100))))
            printf("%d\n", numero);
        	numero = numero + 1;
    }
    
    return 0;
}

*/



