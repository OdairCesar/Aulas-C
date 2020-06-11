#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float orcamento;
	
	printf("Digite o valor do orcamento para viagem \n");
	scanf("%f", &orcamento);
	
	if (orcamento>=10000){
		printf("\n Joao e Maria possuem orcamento para uma viagem internacional, pois seu orcamento e de %f", orcamento);
	}else if (orcamento<=10000){
		printf("\n Joao e Maria irao optar por uma viagem nacional, seu orçamento ficou em %f", orcamento);
	}
	return 0;
}
