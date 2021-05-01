/* Fa�a um algoritmo que leia um n�mero positivo e imprima seus divisores. Exemplo: os
divisores do n�mero 66 s�o: 1, 2, 3, 6, 11, 22, 33 e 66. 
se o resto da divis�o � igual a ZERO, ent�o o numero � divisor.
 */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main () {
	setlocale(LC_ALL,"""");
	//variaveis
	int numero, divisor, resto ;
	
	//Lendo o n�mero
	printf("Digite um n�mero positivo: ");
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
