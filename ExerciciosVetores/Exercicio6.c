/* 6) Faça um algoritmo para preencher um vetor (de tamanho 10) com elementos gerados aleatoriamente de 1 a
20, de maneira que não sejam inseridos números iguais no vetor, ou seja, todos os números contidos no vetor
têm que ser distintos. Crie e utilize dois procedimentos: um para preencher o vetor e outro para imprimi-lo. FEITO*/

#include <stdio.h>


void preencher(int vet[10]){
	int i,j;
	
		
	for(i=0;i<10;i++)
	{
		vet[i] = rand() % 20 +1;
		for(j=0;j<i;j++)
		{
			if(vet[i]==vet[j])
			{
				i--;
				break;
			}
		}				
	}
	
}

void imprimir(int vet[10]){
	int i=0;
	
	printf("Os valores do vetor sao:");
	for(i=0;i<10;i++)
	{
	printf("\n%d", vet[i]);
	}
	
}

int main(){
	int vet[10];
			
	srand(time(NULL));	
	
	preencher(vet);
	imprimir(vet);
	
	return 0;
}
