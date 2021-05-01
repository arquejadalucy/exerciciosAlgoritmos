#include <stdio.h>
/* Escreva uma função que receba como parâmetros dois positivos k e n 
e calcule o valor de k^n*/
int potencia(int k, int n){
  if (n==0) 
    return 1;
  else {
    return (k * potencia(k, n-1));
  } 
}
int main(){
  int base, expoente;
  printf("\nInsira dois valores positivos: \n" );
  printf("base = ");
  scanf("%d", &base);
  printf("\nexpoente = ");
  scanf("%d", &expoente);

  if (base>=0 && expoente>=0){
    printf("\n%d\n",potencia(base,expoente));
  } else {
    printf("Insira somente valores positivos. Tente novamente.");
  }
}
