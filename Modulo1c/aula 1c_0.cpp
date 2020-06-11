#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float salario, bonus, totsal;
	char nome;
	
	printf("Nome do funcionario: ");
	scanf("%s", &nome);
	printf("Salario atual: ");
	scanf("%f", &salario);
	bonus = salario * 0.30;
	totsal = salario + bonus;
	
	printf("O bonus sera R$ %f", bonus,"\n");
	printf("O salario sera R$ %f", totsal, "\n");
	return 0;
}
