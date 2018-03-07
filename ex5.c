#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main (int argc, char *argv[]){
	char sexos[4],iMa, iMe;
	float tamanho[4],somaF = 0, somaM = 0;
	int i,countM = 0, countF = 0;
	float mai = -1,men = 1000;

	for(i = 0; i < 4; i++){
		scanf("%c %f%*c", &sexos[i], &tamanho[i]);		
		if(sexos[i] == 'M' || sexos[i] == 'm'){
			countM++;
			somaM += tamanho[i];
		}
		if(sexos[i] == 'F' || sexos[i] == 'f'){
			countF++;
			somaF += tamanho[i];
		}
	} 
	for(i = 0; i < 4 ;i++){
		if(tamanho[i] > mai){
			mai = tamanho[i];
			iMa = sexos[i];	
		}
		if(tamanho[i] < men){
			men = tamanho[i];
			iMe = sexos[i];	
		}
	}
	
	printf("N de meninas: %d\nN de meninos: %d\nMaior: %.2f Sexo do maior: %c\n Menor: %.2f Sexo do menor: %c\nMedia feminina: %.2f, Media masculina: %.2f\n", countF, countM, mai, iMa, men, iMe, somaF/countF, somaM/countM);

	return 0;
}
