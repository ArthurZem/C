/* 3) Faça um algoritmo para ler pelo teclado uma matriz 4 x 4 com valores inteiros e
também um número inteiro x. Ao final, o algoritmo tem que imprimir se o número x
pertence ou não à matriz. O número x tem que ser lido na função main. Crie e utilize um
procedimento para a leitura da matriz e uma função para realizar a busca. A impressão
da informação (se x está presente ou não na matriz) deve ser na função main. FEITA */

#include <stdio.h>

#define linha 5
#define coluna 5

void ler(int mat[linha][coluna]){
	int i,j;
	
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			printf("Digite o valor para ser posto no vetor:\n");
			scanf("%d",&mat[i][j]); 
		}
	}
	
}

int busca(int mat[linha][coluna],int n){
	int i,j;
	
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			if(mat[i][j] == n){
				return 1;
			}
		}
	}
	return 0;
}

int main(){
	int mat[linha][coluna],n;
	
	ler(mat);
	printf("Digite o numero a ser verificado:");
	scanf("%d", &n);
	if(busca(mat,n)==1){
		printf("O numero esta na matriz");
	}
	else{
		printf("O numero nao esta na matriz");
	}
	
	return 0;
}
