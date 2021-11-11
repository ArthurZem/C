/* 9) Fa�a um algoritmo para verificar se uma dada matriz quadrada 10 x 10 gerada
aleatoriamente com n�meros de 0 at� 19 � uma matriz identidade. Em uma matriz
identidade, todos os elementos da diagonal principal s�o iguais a 1 e os demais s�o
iguais a 0. Crie e utilize um procedimento para a gera��o da matriz e uma fun��o para
a verifica��o. De acordo com o retorno da fun��o deve-se imprimir na fun��o main:
MATRIZ IDENTIDADE ou MATRIZ N�O E IDENTIDADE. FEITA*/

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
