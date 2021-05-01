/* Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três provas.
Em seguida, calcule e escreva na tela o número de alunos cuja pior nota foi
na prova 1, o número de alunos cuja pior nota foi na prova 2 e o número de
alunos cuja pior nota foi na prova 3. 
a = número de alunos cuja pior nota foi na prova 1
b = número de alunos cuja pior nota foi na prova 2
c = número de alunos cuja pior nota foi na prova 3.
*/

#include<stdio.h>
#include<stdlib.h>

int main () {
	int NOTA[10][3], aluno, prova, a=0, b=0, c=0, cont;
	
	//Ler e armazenar as notas na matriz
	printf("\n Entre com as notas dos 10 alunos nas 3 provas \n NOTA[aluno][prova] \n");
	for (aluno=0; aluno<10; aluno++){
		for (prova=0; prova<3; prova++) {
			printf("\n NOTA[%d][%d] = ", aluno+1, prova+1);
			scanf("%d", &NOTA[aluno][prova]);
		}
	} printf("\n\n");
	
	//Mostrar matriz
    for(aluno = 0; aluno<10; aluno++) {
      for (prova = 0; prova < 3; prova++) {
    	printf("\n Aluno %d, prova %d: nota = %d", aluno+1, prova+1, NOTA[aluno][prova]);
      }
      printf("\n");
    }
	
	//Calcular a, b e c
	for (aluno=0; aluno<10; aluno++) {
			if (NOTA[aluno][0] < NOTA[aluno][1] && NOTA[aluno][0] < NOTA[aluno][2]) {
				a++;
			} else if (NOTA[aluno][1] < NOTA[aluno][2]) {
				b++;
			} else if (NOTA[aluno][2] < NOTA[aluno][1] && NOTA[aluno][2] < NOTA[aluno][0]) c++;
	}
	printf("\n\n");
	//mostrar a, b e c
	printf("\n Numero de alunos cuja pior nota foi na prova 1: %d", a);
	printf("\n Numero de alunos cuja pior nota foi na prova 2: %d", b);
	printf("\n Numero de alunos cuja pior nota foi na prova 3: %d", c);
	
	return 0;
}
