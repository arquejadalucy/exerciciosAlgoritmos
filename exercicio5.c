/* Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem crescente. 

enquanto I>0 E I<=N , mostre I */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL,"""");
	// var
	int N, I=0 ;
	
	//lendo N
	printf("Digite um número inteiro positivo: ");
	scanf("%d", &N);
	
	//mostrando os naturais de 0 a N
	do {
		printf("\n %d ", I);
		I++;
	} while (I>0 && I<=N);
	
    //fim
	printf("\n\n");
	system("pause");
}
