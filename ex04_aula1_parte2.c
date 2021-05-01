/* Faça um programa que declare uma matriz de tamanho 5 × 5. Preencha com
1 a diagonal principal e com 0 os demais elementos. Ao final, escreva a matriz
obtida na tela. */

#include<stdio.h>
#include<stdlib.h>

int main() {
	int A[5][5], i=0, j=0;
	
	//Atribuindo os valores da matriz
	for(i=0; i<5; i++){
		for (j=0; j<5; j++) {
	      if (i==j) {
	      	A[i][j] = 1;
	       } else A[i][j]=0;			
	}
	  }
	//mostrando os valores da matriz
	for(i=0; i<5; i++){
		for (j=0; j<5; j++) {
	      printf("%d  ", A[i][j]);			
	}
	printf("\n");
	  }
	  
	return 0;
}
