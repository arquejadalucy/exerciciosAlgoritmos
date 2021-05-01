/* Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto. Fa�a um programa em que o
usu�rio entre com o valor do produto e o estado de destino do produto e o programa
retorne o pre�o final do produto acrescido do imposto do estado em que ele ser�
vendido. Se o estado digitado n�o for v�lido, mostrar� uma mensagem de erro. */

#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"""");
	// vari�veis
	int   estado;
	float valorproduto, precofinal;
	
	//Sele��o do Estado
	printf("\nDigite o n�mero correspondente ao estado:\n") ;
	printf(" 1) MG \n 2) SP \n 3) RJ \n 4) MS \n\n") ;
	scanf("%d", &estado);
	
	//lendo o valor inicial
	printf("\n\nDigite o valor do produto: ");
	scanf("%f", &valorproduto);
	
	//calculando e mostrando o pre�o final
	switch(estado) {
		case 1:
			precofinal=(valorproduto+(valorproduto*(0.07)));
			printf("Pre�o final do produto = R$ %.2f \n", precofinal);
			break;
		case 2:
			precofinal = (valorproduto + (valorproduto*(0.12)));
			printf("Pre�o final do produto = R$%.2f \n", precofinal);
			break;
		case 3:
			precofinal = (valorproduto + (valorproduto*(0.15)));
			printf("Pre�o final do produto = R$%.2f \n", precofinal);
			break;
		case 4: 
		    precofinal = (valorproduto+(valorproduto*(0.08)));
			printf("Pre�o final do produto = R$%.2f \n", precofinal);
			break;
		default:
		    printf("\nERRO: op��o inv�lida\n");
		    break;
	}
	
	
	//fim
	system("pause");
}
