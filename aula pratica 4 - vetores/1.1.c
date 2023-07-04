#include <stdio.h>

int main(){
	int num[10], i;
	for(i=0;i<10;i++){
		printf("Digite o %d numero.\n", i+1);
		scanf("%d", &num[i]);
	}
	printf("Os numeros digitados foram: ");
	for(i=0;i<10;i++){
		if(i!=9){
			printf("%d, ", num[i]);}
		else{
			printf("%d.", num[i]);
		}
	}
	return 0;
}
