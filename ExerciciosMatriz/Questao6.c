/* 6) Faça um algoritmo para imprimir o resultado da multiplicação de um número lido
pelo teclado (lido na função main) por uma matriz de inteiros 2 × 8 gerada
aleatoriamente com números de 0 até 29. A matriz que irá receber o resultado da
multiplicação do número pela matriz deve ser criada na função main. Crie e utilize três
procedimentos: um para a geração da matriz, outro para calcular a multiplicação e um
terceiro para imprimir a matriz com o resultado da multiplicação. FEITA */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define linha 2
#define coluna 8

void gerar(int mat[linha][coluna]){
	int i,j;
	
	printf("Matriz aleatoria:\n");
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			mat[i][j] = rand() % 29;
			printf("%d ", mat[i][j]);
		}
			printf("\n");
	}
	
}

void multiplicar(int mat[linha][coluna], int matr[linha][coluna],int n){
	int i,j;
	
	
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			matr[i][j] = mat[i][j] * n;
		}
	}
	
}

void imprimir(int matr[linha][coluna]){
	int i,j;
	
	printf("Matriz multiplicada:\n");
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
		printf("%d ", matr[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int mat[linha][coluna], matr[linha][coluna],n;
	srand(time(NULL));
	
	printf("Digite o numero para multiplicar a matriz:\n");
	scanf("%d", &n);
	gerar(mat);
	multiplicar(mat,matr,n);
	imprimir(matr);
	
	return 0;
}
