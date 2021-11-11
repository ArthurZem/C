/* 17) Na teoria dos sistemas, define-se como elemento minimax de uma matriz o menor
elemento de uma linha onde se encontra o maior elemento da matriz. Fa�a um algoritmo
para gerar uma matriz quadrada 10 x 10 com n�meros aleat�rios de 1 at� 50 e imprimir
o seu elemento minimax. Crie e utilize um procedimento para a gera��o da matriz e
uma fun��o para retornar o elemento minimax. A impress�o desse elemento tem que ser
na fun��o main. FEITA */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 10

void gerar(int mat[tam][tam]){
	int i,j;
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			mat[i][j] = rand() % 50+1;
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
}

int minimax(int mat[tam][tam]){
	int i,j,auxl,aux=0;
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			if(mat[i][j]>aux){
				aux=mat[i][j];
				auxl=i;
			}
		}
	}
	
	for(i=auxl,j=0;j<tam;j++){
		if(mat[i][j]<aux){
			aux=mat[i][j];
		}
	}
	return aux;
}

int main(){
	int mat[tam][tam];
	
	srand(time(NULL));
	
	gerar(mat);
	printf("O valor minimax e:%d", minimax(mat));
	
	return 0;
}
