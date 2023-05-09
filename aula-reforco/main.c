#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int idade = 20;
  int idade_fut = idade + 10;
  printf("%d\n", idade_fut);

  bool teste;
  if(idade >= 34 && idade_fut <= 50){
    teste = true;
  }else{
    teste = false;
  }

  if(teste){
    printf("Tá ficando veio em nego");
  }else{
    printf("Cheirando a leite\n");
  }

  int lista[5] = {5, 6, 8, 4, 9};
  int soma = 0;
  for(int index = 0; index < 5; index++){
    printf("Valor da posição %d da lista é %d\n", index, lista[index]);
    soma += lista[index];
  }
  printf("\nA soma dos valores da lista é %d\n", soma);
  return 0;
}