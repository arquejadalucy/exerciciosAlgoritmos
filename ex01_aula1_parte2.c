/* Aula 1 Parte 2 
1) Faça um programa que possua um vetor de nome A que armazene seis números
inteiros. O programa deve executar os seguintes passos:
a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
b) Armazene em uma variável a soma dos valores das posições A[0], A[1] e A[5]
do vetor e mostre na tela essa soma.
c) Modifique o vetor na posição 4, atribuindo a essa posição o valor 100.
d) Mostre na tela cada valor do vetor A, um em cada linha. */

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
	int A[6] = {1,0,5,-2,-5,7}, soma, i;
	
	soma = A[0] + A[1] + A[5];
	printf("\nSoma = %d\n", soma);
	
	A[4] = 100;
	
	for (i=0; i<6; i++) {printf("\n%d\n", A[i]);}
	
	return 0;
}
