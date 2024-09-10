#include <stdio.h>

int main(){
	int num, i, j;
	char let;
	printf("Digite uma letra:\n");
	scanf("%c", &let);
	printf("Digite um numero:\n");
	scanf("%d", &num);
	printf("Aqui esta seu quadrado:\n");
	for(i=1; i<=num; i++){
		for(j=1 ; j<=num; j++){
			if(i==1 || i==num){
				printf("%c ", let);
			}else{
				if(j==1 || j==num){
					printf("%c ", let);
				}else{
					printf("  ");
				}
			}
		}
		printf("\n");
	}
	
	return 0;
}
