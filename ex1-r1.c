#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main (int argc, char *argv[]){
	int salario;
	puts("Insira o seu salario:");
	scanf("%i", &salario);

	if(salario<420){
		printf("Desconto: %.2f, Salario Liquido: %.2f\n", salario*0.08, (salario - (salario*0.08)));
		
	}else if(salario<1350){
		printf("Desconto: %.2f, Salario Liquido: %.2f\n", salario*0.09, (salario - (salario*0.09)));	

	}else printf("Desconto: %.2f, Salario Liquido: %.2f\n", salario*0.1, (salario - (salario*0.1)));
	return 0;
}
