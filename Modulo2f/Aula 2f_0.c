#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int compra;
	
	printf ("Digite um numero que corresponde o dia semana e seu respectivo desconto \n");
	printf("Digite 1 para Domingo\n");
	printf("Digite 2 para Segunda\n");
	printf("Digite 3 para Terca\n");
	printf("Digite 4 para Quarta\n");
	printf("Digite 5 para Quinta\n");
	printf("Digite 6 para Sexta\n");
	printf("Digite 7 para Sabado\n");
	scanf("%d", &compra);

	switch ( compra ){
		case 1 :
			printf ("Domingo e dia de refri gratis\n");
			break;
		case 2 :
			printf ("Segunda o desconto sera de 40 por cento no valor da pizza\n");
			break;
		case 3 :
			printf ("Terca o desconto sera de 30 por cento no valor da pizza\n");
			break;
		case 4 :
			printf ("Quarta e dia de pizza em dobro \n");
			break;
		case 5 :
			printf ("Quinta o desconto sera de 20 por cento no valor da pizza \n");
			break;
		case 6 :
			printf ("Sexta o desconto sera de 10 por cento no valor da pizza\n");
			break;
		case 7 :
			printf ("Sabado nao tem desconto\n");
			break;
		default :
		printf ("\n O valor digitado nao corresponde a nenhum dia da semana\n");
	}
	getch();

	
	
	return 0;
}
