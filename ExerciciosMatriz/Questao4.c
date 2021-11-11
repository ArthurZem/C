/* 4) Faça um algoritmo para ler pelo teclado duas matrizes de reais 5 × 3 e imprimir a
soma dessas matrizes. A matriz que irá receber a soma das outras duas deve ser criada
na função main. Crie e utilize três procedimentos: um para a leitura das matrizes, outro
para calcular a soma e um terceiro para imprimir a matriz com o resultado da soma. FEITA */

#include <stdio.h>

#define linha 5
#define coluna 3

void ler(int mat1[linha][coluna],int mat2[linha][coluna]){
	int i,j;
	
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			printf("Digite o valor para ser posto no vetor 1:\n");
			scanf("%d",&mat1[i][j]); 
		}
	}
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			printf("Digite o valor para ser posto no vetor 2:\n");
			scanf("%d",&mat2[i][j]); 
		}
	}
}

void soma(int mat1[linha][coluna],int mat2[linha][coluna], int mat3[linha][coluna]){
	int i,j;
	
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			mat3[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	
}

void imprimir(int mat3[linha][coluna]){
	int i,j;
	
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			printf("%d ", mat3[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int mat1[linha][coluna],mat2[linha][coluna],mat3[linha][coluna];
	
	ler(mat1,mat2);
	soma(mat1,mat2,mat3);
	imprimir(mat3);
	
	return 0;
}
