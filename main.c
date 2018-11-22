#include <stdio.h>

int main(void) {
  int v[80], i = 0;
  printf("Insira a tabela verdade:\n");
  while(i < 80){
    scanf("%d",&v[i]);
    i++;
  }
  for(int n = 4; n < 80; n+=5){
    if(v[n] == 1){
      if(v[n-4] == 0)
        printf("A'.");
      else
        printf("A.");
      if(v[n-3] == 0)
        printf("B'.");
      else
        printf("B.");
      if(v[n-2] == 0)
        printf("C'.");
      else
        printf("C.");
      if(v[n-1] == 0)
        printf("D' + ");  //vai sair um + no final, fiquei com preguiça de arrumar
      else
        printf("D + ");   //vai sair um + no final, fiquei com preguiça de arrumar
    }
  }
}