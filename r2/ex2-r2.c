#include <string.h>
#include <stdio.h>

typedef struct {
    char name[20];
    char type[10];
    int memQuant;
    int rankPos;
}tBand;
tBand gBands[5] = {'\0'};


void searchRank(){
    int rank;
    puts("Insira o rank a ser pesquisado:");
    scanf("%d%*c", &rank);
    int i,count = 0;
    puts("================");    
    for(i = 0; i < 5; i++){
        if(gBands[i].rankPos == rank){
            puts(gBands[i].name);
            continue;
        }
        count++;
    }
    if(count == 5) printf("Nenhuma banda foi encontrada com esse rank\n");
    puts("================");   
}

void searchType(){
    puts("Insira o tipo a ser procurado");
    char entrada[100];
    gets(entrada);
    int i,count = 0;
    puts("================");
    for(i = 0; i < 5; i++){
        //printf("%d", count);
        if(strcmp(entrada, gBands[i].type) == 0){
            puts(gBands[i].name);
            continue;
        }
        count++;
    }
    if(count == 5) printf("Nenhuma banda foi encontrada com esse tipo\n");
    puts("================");   
}

void searchBand(){
    puts("Insira o nome a ser procurado");
    char entrada[100];
    gets(entrada);
    int i,count=0;
    puts("================");
    for(i = 0; i < 5; i++){
        if(strcmp(entrada, gBands[i].name) == 0){
            count++;
        }
    }
    if(count){
        printf("essa banda esta na lista\n");
    }else printf("essa banda não foi encontrada\n");
    puts("================");   
};

void menu(){
    int entrada;
    while(1){
        printf("o que deseja fazer:\n");
        printf("\n");
        printf("1-Procurar banda por rank\n");
        printf("2-Procurar banda por tipo\n");
        printf("3-Checar se há uma banda na lista\n");
        printf("4-Fechar programa\n");
        printf("Insira código [1-4]:\n");
        scanf("%d%*c", &entrada);
        switch(entrada){
            case 1:
                searchRank();
                break;
            case 2:
                searchType();
                break;
            case 3:
                searchBand();
                break;
            case 4:
                return NULL;
            break;
            default:
                puts("entrada invalida");
                break;
        }
    }
}

void fillData(){
    int i = 0;
    //mod
    while(gBands[4].rankPos == 100){
        printf("Insira o nome da banda %i\n", i+1);
        gets(gBands[i].name);
        printf("Insira o tipo da banda %i\n", i+1);
        gets(gBands[i].type);
        printf("Insira a quantidade de membros da banda %i\n", i+1);
        scanf("%i", &gBands[i].memQuant);
        printf("Insira o rank da banda %i de 1 a 5\n", i+1);
        scanf("%i%*c", &gBands[i].rankPos);
        i++;
    }
}

int main(int argc,char argv[]){
    //mod
    gBands[4].rankPos = 100;
    fillData();
    menu();
    puts("Obrigado por utilizar");
    return 0;
}