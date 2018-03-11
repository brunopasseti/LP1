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
	char input[1000], i, j;
	fgets(input,1000, stdin);
	input[strlen(input) - 1] = '\0';	
	j = strlen(input);
	for(i = 0; i < strlen(input); i++){
		for(j = 0; j < i+1; j++){
			printf("%c", input[j]);
		}
		printf("\n");
	}
	
	return 0;
}
