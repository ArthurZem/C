/* 15) Fa�a um algoritmo para calcular a soma dos elementos que est�o em uma coluna x
de uma matriz 10 x 4 gerada aleatoriamente com n�meros de 1 at� 15. A coluna a ser
somada (coluna x) deve ser lida pelo teclado na fun��o main. Crie e utilize um
procedimento para a gera��o da matriz e uma fun��o para realizar a soma. O resultado
da soma tem que ser impresso na fun��o main. FEITA*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linha 10
#define coluna 4

void gerar(int mat[linha][coluna]){
	int i,j;
	
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			mat[i][j] = rand() % 15+1;
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}

int soma(int mat[linha][coluna],int n){
	int i,j,r;
	
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			if(j==n-1){
				r+= mat[i][j];
			}
		}
	}
	return r;
}


int main(){
	int mat[linha][coluna],n;
	
	srand(time(NULL));
	
	gerar(mat);
	printf("Digite o numero da coluna que deseja somar:\n");
	scanf("%d", &n);
	printf("O resultado da soma e:\n%d", soma(mat,n));
	
	return 0;
}
