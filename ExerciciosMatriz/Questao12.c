/* 12) Faça um algoritmo para gerar e imprimir uma matriz quadrada A de tamanho
10 x 10, onde seus elementos são:
2.i + 7.j + 2, se i < j;
3.i² – 1, se i = j;
4.i³ – 5.j² + 1, se i > j.
Crie e utilize dois procedimentos: um para gerar a matriz e outro para imprimi-la. FEITA*/

#include <stdio.h>

#define  tam 10

void gerar(int mat[tam][tam]){
	int i,j;
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			if(i<j){
				mat[i][j] = 2*(i+1) + 7*(j+1) +2;
			}
			if(i==j){
				mat[i][j] = 3*(i+1)*(i+1) -1 ;
			}
			if(i>j){
				mat[i][j] = 4*(i+1)*(i+1)*(i+1) - 5*(j+1)*(j+1) + 1;
			}
		}
	}
	
}

void imprimir(int mat[tam][tam]){
	int i,j;
	
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
}

int main(){
	int mat[tam][tam];
	
	gerar(mat);
	imprimir(mat);
	
	
	return 0;
}
