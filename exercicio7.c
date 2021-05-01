/* Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: os
divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66. 
se o resto da divisão é igual a ZERO, então o numero é divisor.
 */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main () {
	setlocale(LC_ALL,"""");
	//variaveis
	int numero, divisor, resto ;
	
	//Lendo o número
	printf("Digite um número positivo: ");
	scanf("%d", &numero);
	
	//encontrando e mostrando os divisores
	for (divisor=1; divisor<=numero; divisor++) {
		resto = numero%divisor;
		if (resto == 0) {
			printf("\n %d \n", divisor);
		}
	}
	
    //fim
	printf("\n\n");
	system("pause");
}
