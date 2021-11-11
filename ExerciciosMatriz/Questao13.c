/*  13) Fa�a um algoritmo para calcular a soma dos elementos que est�o acima da
diagonal principal de uma matriz quadrada 5 x 5 gerada aleatoriamente com n�meros de
1 at� 40. Crie e utilize um procedimento para a gera��o da matriz e uma fun��o para
realizar a soma. O resultado da soma tem que ser impresso na fun��o main. FEITA*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 5

void gerar(int mat[tam][tam]){
	int i,j;
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			mat[i][j] = rand() % 40+1;
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}

int soma(int mat[tam][tam]){
	int i,j,soma;
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			if(i<j){
				soma += mat[i][j];
			}
		}
	}
	return soma;
}

int main(){
	int mat[tam][tam];
	
	srand(time(NULL));
	
	gerar(mat);
	printf("A soma dos elementos acima da diagonal principal e: %d ", soma(mat));
	
	return 0;
}
