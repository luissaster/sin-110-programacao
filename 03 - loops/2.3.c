/*2.3 O quadrado de um n�mero natural n � dado pela soma dos n primeiros n�meros �mpares
consecutivos. Por exemplo:
1� = 1
2� = 1+3
3� = 1+3+5
4� = 1+3+5+7
Dado um n�mero n, calcule seu quadrado usando a soma de �mpares ao inv�s do produto. */

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
