/* 5) Fa�a um algoritmo para ler pelo teclado duas matrizes de reais 3 � 4 e imprimir a
subtra��o dessas matrizes. A matriz que ir� receber a subtra��o das outras duas deve ser
criada na fun��o main. Crie e utilize tr�s procedimentos: um para a leitura das
matrizes, outro para calcular a subtra��o e um terceiro para imprimir a matriz com o
resultado da subtra��o  FEITA*/

#include <stdio.h>

#define linha 3
#define coluna 4

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
			mat3[i][j] = mat1[i][j] - mat2[i][j];
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
