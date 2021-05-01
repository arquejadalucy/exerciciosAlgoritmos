/* Ler a altura e o sexo de uma pessoa e calcular seu peso ideal,
utilizando as seguintes fórmulas: para homens: (72.7 x altura) – 58 e
para mulheres: (62.1 x altura) - 44.7 */

#include<stdio.h>
#include<stdlib.h>

void main() {
	//variaveis
	float altura, peso ;
	int sexo ;
	
	//Lendo altura e sexo
	printf("\n ola");
	printf("\n\n Digite sua altura: ") ; 
	scanf("%f", &altura);
	
	printf("\n\n Digite o numero que corresponde ao seu sexo: ");
	printf("\n 1) Feminino \n 2) Masculino \n\n");
	scanf("%d", &sexo);
	
	switch(sexo) {
		case 1:
			peso = ((62.1 * altura) - 44.7);
			printf("\n\n Peso ideal: %.3f kg", peso);
			break;
		case 2: 
			peso = ((72.7 * altura) - 58);
			printf("\n\n Peso ideal: %.3f kg", peso);
			break;
	}
	
	//fim
	printf("\n\n");
	system("pause");
}
