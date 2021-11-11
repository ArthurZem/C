/* 16) Faça um algoritmo que leia uma matriz de ordem 4 com valores reais e imprima a
soma dos valores contidos em sua diagonal secundária. Crie e utilize um procedimento
para ler a matriz e uma função para realizar a soma. O resultado da soma tem que ser
impresso na função main. FEITA */

#include <stdio.h>

#define tam 4

void ler(float mat[tam][tam]){
	int i,j;
	
	for(i=0;i<tam;i++)
	{
		for(j=0;j<tam;j++)
		{
			printf("Digite o valor para ser posto na matriz:\n");
			scanf("%f", &mat[i][j]);
		}
	}
	
	for(i=0;i<tam;i++)
	{
		for(j=0;j<tam;j++)
		{
			printf("%f ", mat[i][j]);
		}
			printf("\n");
		}
}

float soma(float mat[tam][tam]){
	int i,j,r;
	
	for(i=0;i<=tam;i++)
	{
		for(j=0;j<=tam;j++)
		{
			if(i+j+2==tam+1)
			{
				r+= mat[i][j];
			}
		}
	}
	return r;
}

int main(){
	float mat[tam][tam];
	
	ler(mat);
	printf("A soma dos valores da diagonal secundaria e:\n%.2f", soma(mat));
	
	return 0;
}
