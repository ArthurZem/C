/* 20) Faça um algoritmo que leia uma matriz 10 x 3, onde as linhas representam os
alunos e as colunas as 3 provas de cada aluno. Em seguida, imprima a maior nota e a
menor nota da prova 1, da prova 2 e da prova 3. Crie e utilize dois procedimentos: um
para ler a matriz e outro para imprimir as informações. */

#include <stdio.h>

#define l 5
#define c 3

void ler(int mat[l][c]){
	int i,j;
	
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Insira a nota da prova %d do aluno %d\n", j+1, i+1);
			scanf("%d", &mat[i][j]);
	 	}
	}
	
}

void imprimir(int mat[l][c]){
	int i,j,maior=0,menor=0;
	
	
	
	for(j=0;j<c;j++)
	{
		if(mat[i][j] > maior)
		{
			maior = mat[0][j];
			for(i=0;i<l;i++)
			{
				
			}	
		}
	}
	
}

int main(){
	int mat[l][c];
	
	ler(mat);
	imprimir(mat);
	
	return 0;
}
