#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Inserir(int a[]){
	int i;
	for(i=0; i<3; i++){
		printf("Valor %d :", i);
		scanf("%d", &a[i]);
	}
}
void Imprimir(int b[]){
	int i;
	for(i=0; i<3; i++){
		printf("\n numeros [%d] = %d", i, 2*b[i]);
	}
}

void main() {
	int numero[3];
	printf("Preencha o vetor: \n");
	Inserir(numero);
	Imprimir(numero);
}
