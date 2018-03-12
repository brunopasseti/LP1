#include <string.h>
#include <stdio.h>

typedef struct {
    char nome[30];
    char endereco[50];
    char matricula[10];
    char curso[30];
}tAluno;

tAluno gAlunos[100] = {'\0'};

unsigned int consultaAlunoPorCurso(char *curso){
    int i,count = 0;
    for(i = 0; i < 100; i++){
        if(!(strcmp(gAlunos[i].curso, curso))) count++;
    }
    return count;
}

int main(int argc, char *argv){
    strcpy(gAlunos[1].curso, "Computacao");
    strcpy(gAlunos[2].curso, "Computacao");
    strcpy(gAlunos[3].curso, "Fisica");
    // gAlunos[1].curso = "Computacao";
    // gAlunos[2].curso = "Computacao";
    // gAlunos[3].curso = "Fisica";
    char *procura = "";
    printf("o numero de alunas cadastrados na Cadeiras de computação é: %i\n", consultaAlunoPorCurso(procura));
    return 0;
}