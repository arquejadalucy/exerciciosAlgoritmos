/* Aula 1 Parte 2
2 - Fa�a um programa que l� um vetor de 10 n�meros inteiros e um n�mero n a ser
procurado no vetor. Escrever quantas vezes n aparece no vetor e em quais posi��es. */

#include<stdio.h>
#include<stdlib.h>

int main() {
	int V[10], n, i, quant=0;
	
	printf("\n Digite 10 numeros inteiros: \n");
	for(i=0; i<10; i++) {
		scanf("%d", &V[i]);
	}
	
	printf("\n Digite o numero a ser procurado: \n");
	scanf("%d", &n);
	
	
	 i=0;
	while(i < 10) { //encontrar a posi��o de x no vector v
        if (V[i] == n) {printf("Encontrado na posicao %d\n",i); quant++;}  //mostrar a posi��o
    	i++;
	}
	
	printf("O numero %d foi encontrado %d vezes no vetor V", n, quant);
	
	return 0;
}
