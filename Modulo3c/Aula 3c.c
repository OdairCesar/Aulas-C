#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int FazerFatoracao(int valor){
	if(valor != 1){
		return valor * fatorial(valor -1);
	}
	else{
		return valor;	
	}
}

int main(int argc, char *argv[]) {
	int fatorial, resultado;
	
	printf("De qual numero voce que saber o fatorial? ");
	scanf("%d", fatorial);
	resultado = FazerFatoracao(fatorial);
	
	pritf("O fatorial de %d e igual a %d", fatorial, resultado);
	return 0;
}
