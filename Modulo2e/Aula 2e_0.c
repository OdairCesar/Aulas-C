#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a, b, c;
	
	printf("Classificacao do triangulo: informe a medida do lados apertando a Tecla ENTER para cada medida:\n");
	scanf("%d %d %d", &a, &b, &c);
	
	if ((a<b+c) && (b<a+c) && (c<a+b)){
		printf("\nDadas as medidas %d, %d, %d, temos um triangulo", a, b, c);
		if(a==b && a==c){
			printf("\nEste e um triangulo EQUILATERO!\n");
		}
		else if(a==b || a==c || b==c){
			printf("\nEste e um triangulo ISOSCELES!\n");
		}
		else {
			printf("\nEste e um triangulo ESCALENO!\n");
		}
	}
	else{
		printf("\n As medidas fornecidas, %d, %d, %d nao formam um triangulo", a, b ,c);
	}
	return 0;
}
