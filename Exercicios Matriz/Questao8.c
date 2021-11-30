/* 8) Faça um algoritmo para calcular e imprimir a matriz transposta de uma matriz 7 x 3
gerada aleatoriamente com números de 1 até 25. A matriz que irá receber o resultado da
transposta deve ser criada na função main. Crie e utilize três procedimentos: um para a
geração da matriz, outro para calcular a transposta e um terceiro para imprimir a matriz
transposta. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linha 7
#define coluna 3

void gerar(int mat[linha][coluna]){
	int i,j;
	
	printf("Matriz normal:\n");
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			mat[i][j] = rand() % 25 +1;
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
}

void calculo(int mat[linha][coluna], int matt[coluna][linha]){
	int i,j,aux;
	
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			mat[j][i] = mat[i][j];
		}
	}
}

void imprimir(int matt[coluna][linha]){
	int i,j;
	
	printf("\nMatriz transposta:\n");
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			printf("%d ", matt[i][j]);
		}
			printf("\n");
	}
	
}

int main(){
	int mat[linha][coluna],matt[coluna][linha];
	
	srand(time(NULL));
	gerar(mat);
	calculo(mat,matt);
	imprimir(matt);
	
	
	return 0;
}
