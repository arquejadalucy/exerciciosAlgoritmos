/* Uma cidade classifica o ar baseado em um índice de poluição, de
acordo com os seguintes limites: 
IP < 35, bom; 
35 <= IP < 50, atenção; 
51<=IP<75; perigoso; 
75 <= IP <= 100, emergência. 
O programa deve ter como entrada o valor do IP, e imprimir uma
mensagem indicando a respectiva classificação. */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, """");
	// variável: valor do índice de Poluição
	int IP ;
	//entrada
	printf("\n Índice de Poluição = ");
	scanf("%d", &IP);
	//classificação
	if (IP<35) {
		printf("\n Classificação do ar: BOM. \n\n");
	} else 
	if (IP<50) {
		printf("\n Classificação do ar: ATENÇÃO \n\n");
	} else
	if (IP<75) {
		printf("\n Classificação do ar: PERIGOSO \n\n");
	} else
	if (IP<=100) {
		printf("\n Classificação do ar: EMERGÊNCIA \n\n");
	}

	//fim
	system("pause");
}
