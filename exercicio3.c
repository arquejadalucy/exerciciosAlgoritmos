/* Uma cidade classifica o ar baseado em um �ndice de polui��o, de
acordo com os seguintes limites: 
IP < 35, bom; 
35 <= IP < 50, aten��o; 
51<=IP<75; perigoso; 
75 <= IP <= 100, emerg�ncia. 
O programa deve ter como entrada o valor do IP, e imprimir uma
mensagem indicando a respectiva classifica��o. */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, """");
	// vari�vel: valor do �ndice de Polui��o
	int IP ;
	//entrada
	printf("\n �ndice de Polui��o = ");
	scanf("%d", &IP);
	//classifica��o
	if (IP<35) {
		printf("\n Classifica��o do ar: BOM. \n\n");
	} else 
	if (IP<50) {
		printf("\n Classifica��o do ar: ATEN��O \n\n");
	} else
	if (IP<75) {
		printf("\n Classifica��o do ar: PERIGOSO \n\n");
	} else
	if (IP<=100) {
		printf("\n Classifica��o do ar: EMERG�NCIA \n\n");
	}

	//fim
	system("pause");
}
