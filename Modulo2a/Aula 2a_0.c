#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float salario, inss, ir, sal_liquido;
	
	printf("Digite seu salario bruto: ");
	scanf("%f", &salario);
	
	if(salario <= 1693.72){
		inss = salario * 0.08;
		ir = 0;	
	}
	else if((salario >= 1693.73 && salario <= 2822.90) && salario <= 1903.98){
		inss = salario * 0.09;
		ir = 0;
	}
	else if((salario >= 1693.73 && salario <= 2822.90) && salario >= 1903.99){
		inss = salario * 0.09;
		ir = salario * 0.075;
	}
	else if((salario >= 2822.91 && salario <= 5646.80) && salario <= 2826.65){
		inss = salario * 0.11;
		ir = salario * 0.075;
	}
	else if((salario >= 2822.91 && salario <= 5646.88) && salario <= 3751.05){
		inss = salario * 0.11;
		ir = 0.15;
	}
	else if((salario >= 2822.91 && salario <= 5646.88) && salario <= 4664.68){
		inss = salario * 0.11;
		ir = 0.225;
	}
	else if((salario >= 2822.91 && salario <= 5646.88) && salario >= 4664.69){
		inss = salario * 0.11;
		ir = 0.275;
	}
	else if(salario >= 5664.80){
		inss = salario + 621.04;
		ir = salario * 0.275;
	}
	
	sal_liquido = salario - (inss + ir);
	printf("Seu desconto de INSS e R$ %f \n", inss);
	if(ir == 0){
		printf("Voce nao paga Imposto de Renda \n");
	}else{
		printf("Seu desconto de Imposto de Renda e R$ %f \n", ir);
	}
	printf("Seu salario liquido sera R$ %f \n", sal_liquido);
	
	return 0;
}
