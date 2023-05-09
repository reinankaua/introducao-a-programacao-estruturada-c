#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int idade = 20;
  int idade_fut = idade + 10;
  bool teste;
  printf("%d\n", idade_fut);

  if(idade >= 34 && idade_fut <= 50){
    teste = true;
  }else{
    teste = false;
  }

  if(teste){
    printf("Tá ficando veio em nego");
  }else{
    printf("Cheirando a leite");
  }

  
  return 0;
}