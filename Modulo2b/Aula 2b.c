#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int sabor[5], c, cc = 1;
	char logico;
	
	//Pegam os dados
	printf("Quandos sabores voce quer? \n");
	scanf("%d", &c);
	
	do{
		for(c; cc<=c; cc++){
			do{
				printf("1. Flocos \n");
				printf("2. Morango \n");
				printf("3. Napolitano \n");
				printf("4. Chocolate \n");
				printf("5. Creme de leite \n");
				printf("6. Milho verde \n");
				printf("Digite o numero do sabor: ");
				scanf("%d", &sabor[cc]);
			}while ((sabor[cc] >6) && (sabor[cc]<1));
		}
		
		cc = 1;
		
		do{
			printf("\n\nSeu %d sabor e ", cc);
			switch(sabor[cc]){
				case 1:
					printf("Flocos \n");
					break;
				case 2:
					printf("Morango \n");
					break;
				case 3:
					printf("Napolitano \n");
					break;
				case 4:
					printf("Chocolate \n");
					break;
				case 5:
					printf("Creme de Leite \n");
					break;
				case 6:
					printf("Milho Verde \n");
					break;
				default:
					printf("INVALIDDO");
					break;
			}
			cc = cc + 1;
		}while (cc <= c);

		printf("\n\n Os sabores estao corretos (sim/nao):");
		scanf("%s", &logico);
	}while (strcmp(logico, 'nao'));
	return 0;
}
