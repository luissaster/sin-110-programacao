/*2.3 O quadrado de um número natural n é dado pela soma dos n primeiros números ímpares
consecutivos. Por exemplo:
1² = 1
2² = 1+3
3² = 1+3+5
4² = 1+3+5+7
Dado um número n, calcule seu quadrado usando a soma de ímpares ao invés do produto. */

#include <stdio.h>

int main(){
	int i=0, num;
	printf("Insira um numero:\n");
	scanf("%d", &num);
	printf("Esse numero elevado ao quadrado e: %d^2 = %d.\nOu a soma desses numeros impares: ", num, num*num);
	num = num*2;
	for(i=1; i<num; i++){
		if(i%2!=0){
			printf("%d ", i);
		}
	}
	printf("= %d.", ((num/2)*(num/2)));
	return 0;
}
