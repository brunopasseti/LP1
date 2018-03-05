#include <stdio.h>
#include <stdlib.h>
#include <strings.h>


//strlen não é implementado no linux
int strlen(char *str){
    int total=0;

    while( str[total] != '\0')
        total++;

    return total;
}



int main (int argc, char *argv[]){
	char input[1000], copy[1000], i, j;
	gets(input);
	char count = 0;
	//invertendo
	//printf("%d\n", strlen(input));
	j = strlen(input)-1;
	for(i = 0; i < strlen(input); i++){
		//printf("%d, %d\n", i, j);
		copy[i] = input[j];
		j--;
	}
	for(i = 0; i < strlen(input); i++){
		if(input[i] == copy[i]){
			count++;		
		}
	}
	if(count){
		printf("Eh palindromo\n");
	}else printf("Nao eh palindromo\n");

	//puts(copy);
	return 0;
}
