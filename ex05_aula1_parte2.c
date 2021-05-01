/* Faça um programa que permita ao usuário entrar com uma matriz de
tamanho 3× 3 de números inteiros. 
Em seguida, calcule um vetor contendo três
posições, em que cada posição deverá armazenar a soma dos números de
cada coluna j da matriz. Exiba na tela esse array.
    00 01 02
    10 11 12
    20 21 22
 */

#include<stdio.h>
#include<stdlib.h>

int main() {
	//declara
	int A[3][3], vetor[3], i, j, k=0;
	
	//entrada dos valores da matriz
	printf("\n Entre com os valores da matriz A(3x3) \n");
	for (i=0; i<3; i++){
		for (j=0; j<3; j++) {
			printf("\n A[%d][%d] = ", i, j);
			scanf("%d", &A[i][j]);
		}
	} printf("\n");

	 //Imprimindo matriz
    for(i = 0; i< 3; i++) {
      for (j = 0; j < 3; j++) {
    	printf("%d ", A[i][j]);
      }
      printf("\n");
    }
    
    //Calculando o vetor
		vetor[0]=(A[0][0]+A[1][0]+A[2][0]);	
		vetor[1]=(A[0][1]+A[1][1]+A[2][1]);	
		vetor[2]=(A[0][2]+A[1][2]+A[2][2]);
		
    //Imprimindo o vetor
    printf("\n\n Vetor = (%d, %d, %d) \n", vetor[0], vetor[1], vetor[2]);
  
   return 0;  
}
