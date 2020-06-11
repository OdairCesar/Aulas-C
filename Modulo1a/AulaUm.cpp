#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char nome[30];
	char endereco[30];
	int idade;
	
	printf("Nome: ");
	scanf("%s", &nome, "\n");
	printf("Rua: ");
	scanf("%s", &endereco, "\n");
	printf("Idade: ");
	scanf("%d", &idade, "\n");
	
	printf("Nome: %s. ", nome);
	printf("Endereco: %s. ", endereco);
	printf("Idade: %d. ", idade);
}
