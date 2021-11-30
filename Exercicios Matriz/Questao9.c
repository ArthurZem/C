/* 9) Faça um algoritmo para verificar se uma dada matriz quadrada 10 x 10 gerada
aleatoriamente com números de 0 até 19 é uma matriz identidade. Em uma matriz
identidade, todos os elementos da diagonal principal são iguais a 1 e os demais são
iguais a 0. Crie e utilize um procedimento para a geração da matriz e uma função para
a verificação. De acordo com o retorno da função deve-se imprimir na função main:
MATRIZ IDENTIDADE ou MATRIZ NÃO E IDENTIDADE. FEITA*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 10

void gerar(int mat[tam][tam]){
	int i,j;
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			mat[i][j] = rand() % 25 +1;
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
}

int verificar(int mat[tam][tam]){
	int i,j;
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			if(i==j){
				if(mat[i][j]!=1){
					return 0;
				}
			}
			if(i!=j){
				if(mat[i][j]=!0){
					return 0;
				}
			}
		}
	}
	
	return 1;
}

int main(){
	int mat[tam][tam];
	srand(time(NULL));
	
	gerar(mat);
	if(verificar(mat)){
		printf("MATRIZ E IDENTIDADE");
	}
	else{
		printf("MATRIZ NAO E IDENTIDADE");
	}
	
	return 0;
}
