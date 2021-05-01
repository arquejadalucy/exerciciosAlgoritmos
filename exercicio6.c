/* Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido. */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main () {
	setlocale(LC_ALL,"""");
	//variaveis
	float numero, menor, maior, cont;
	
	//Comparando os 10 numeros
	for (cont=0; cont<10; cont++) {
		printf("Digite um número: ");
	    scanf("%f", &numero);
	    
	    if (numero>maior){
	    	maior=numero;
		} else if (numero<menor) {
			menor=numero;
		}
   	}
   	
   	//mostrando o maior e menor
   	printf("\n Maior = %.2f \n", maior);
   	printf("\n Menor = %.2f \n", menor);
	
    //fim
	printf("\n\n");
	system("pause");
}
