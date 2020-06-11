#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int num[20];

void PassarNumeros(int cont){
	int cc=0;
	for (cont; cont>cc; cc++){
		printf("Qual o %d numero da soma? ", cc);
		scanf("%d", &num[cc]);
	}
}
int SomarNumeros(int cont){
	int cc=0, soma=0;
	for (cont; cont>cc; cc++){
		soma = soma + num[cc];
	}
	return soma;
}

int main(int argc, char** argv) {
	int contator, x, resultado;
	
	printf("Quantos numeros sera somado (max. 10)? ");
	scanf("%d", &contator);
	PassarNumeros(contator);
	resultado = SomarNumeros(contator);
	
	printf("\n\n--------------------------------\n");
	printf("O resultado da funcao e igual %d", resultado);
	return 0;
}
