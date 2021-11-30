/* 1) Faça um algoritmo para ler pelo teclado uma matriz 5×4 com valores reais e
imprimir o maior valor presente na matriz e a sua posição (linha e coluna). Crie e utilize
duas funções: uma para a leitura da matriz e outra para imprimir as informações. */

#include <stdio.h>

#define linha 5
#define coluna 4

void ler(float mat[linha][coluna]){
	int i,j;
	
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			printf("Digite o valor para ser posto no vetor:\n");
			scanf("%f",&mat[i][j]); 
		}
	}
	
}

void imprimir(float mat[linha][coluna]){
	int i,j,auxl,auxc;
	float maior;
	
	maior=mat[0][0];
	for(i=1;i<linha;i++){
		for(j=1;j<coluna;j++){
			if(mat[i][j] > maior){
				maior=mat[i][j];
				auxl = i;
				auxc = j;
			}
		}
	}
	printf("O maior valor e o %.2f, que esta na linha %d e coluna %d", maior, auxl +1, auxc +1);
}

int main(){
	float mat[linha][coluna];
	
	ler(mat);
	imprimir(mat);
	
	return 0;
}
