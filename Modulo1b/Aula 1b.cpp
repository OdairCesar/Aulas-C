#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) { 
	float nota1, nota2, media;
	
	printf("Insira a nota 1: ");
	scanf("%f", &nota1, "\n");
	printf("Insira a nota 2: ");
	scanf("%f", &nota2, "\n");
	
	media = (nota1 + nota2)/2;
	printf("A sua nota media é %f", media);
}
