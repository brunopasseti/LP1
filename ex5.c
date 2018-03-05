#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main (int argc, char *argv[]){
	char sexos[2];
	float tamanho[2],soma;
	int i,countM = 0, countF = 0;
	float mai = 1000,men = -1;

	for(i = 0; i < 2; i++){
		scanf("%c %f%*c", &sexos[i], &tamanho[i]);
		soma += tamanho[i];
		if(sexos[i] == 'M' || sexos[i] == 'm'){
		}
		if(sexos[i] == 'F' || sexos[i] == 'f'){
			countF++;
		}
	}
	for(i = 0; i < 2; i++){
		if(tamanho[i] > mai){
			mai = tamanho[i];		
		}
		if(tamanho[i] < men){
			mai = tamanho[i];		
		}
	}
	printf(maior)

	return 0;
}
