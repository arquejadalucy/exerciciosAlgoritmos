/*Dados três valores distintos, fazer um programa que após a leitura
dos numeros, coloque-os em ordem crescente.*/

/* Possibilidades de ordenação. Permutação de 3 elementos = 3! = 6 */

#include<stdio.h>

int main (){
	//variaveis
	int n1, n2, n3;
	//lendo os números
	printf("Digite um  numero inteiro: ");
	scanf("%d", &n1);
	printf("Digite um  numero inteiro: ");
	scanf("%d", &n2);
	printf("Digite um  numero inteiro: ");
	scanf("%d", &n3);
	//ordenando
	
	// se n1 for o menor
	if (n1<n2 && n1<n3) {
		if (n2<n3) {
			printf("\n %d \n %d \n %d \n", n1, n2, n3);
		} else printf("\n %d \n %d \n %d \n", n1, n3, n2);
	} else
	//se n2 for o menor
	if (n2<n3) {
		if (n1<n3) {
			printf("\n %d \n %d \n %d \n", n2, n1, n3);
		} else printf("\n %d \n %d \n %d \n", n2, n3, n1);
		
		} else
	//se n3 for o menor
	if(n2<n1) {
		printf("\n %d \n %d \n %d \n", n3, n2, n1);
	} else printf("\n %d \n %d \n %d \n", n3, n1, n2);
	
	//FIM
	system("pause");
	}

