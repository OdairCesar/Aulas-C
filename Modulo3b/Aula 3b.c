#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int CalcularMassa(float a, float b){
	const float mA=321.43; 
	const float mB=150.72;
	
	printf("\n1,2 : 1,0 : %f\n", (1,2*mA + mB));
	printf("1,4 : 1,0 : %f\n", (1,4*mA + mB));
	printf("1,0 : 1,6 : %f\n", (mA + 1,6*mB));
	
	return (a*mA) + (b*mB);
}

int main(int argc, char** argv) {
	float a=0, b=0, resultado=0;
	
	printf("Digite as massas do elemento A e B: \n");
	scanf("%f %f", &a, &b);
	resultado = CalcularMassa(a, b);
	
	printf("\n\nResultado: %f\n", resultado);
	return 0;
}
