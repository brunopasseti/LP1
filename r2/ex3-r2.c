#include <string.h>
#include <stdio.h>

int main(void){
  int voto;
  int count = 0;
  int jogador[23] = {0};
  while(1){
    printf("Numero do jogador (0=fim): ");
    scanf("%d", &voto);
    if(!voto) break;
    jogador[voto-1]++;
    count++;
  }
  int i, max = -1;
  printf("\n\n\nJogador\tVotos\tPorcent\n\n");
  for(i = 0;i < 23; i++){
    if(jogador[i] > max) max = i;
    if(jogador[i]){
      printf("%d\t%d\t%.2f\n", i+1, jogador[i], (float)jogador[i]/count);
    }
  }
  printf("max: %d, count:%d\n", max, count);
  printf("O jogador campeao foi %d, com %.2f%% dos votos\n", max+1, (float) jogador[max]/count);
}
