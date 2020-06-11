#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if (idade >= 18){
		printf("\nVoce e maior de idade, entao podera fazer sua CNH.");
	}
	else if(idade <= 18){
		printf("\nVoce e menor de idade, entao nao podera fazer sua CNH.");
	}
	
	return 0;
}
