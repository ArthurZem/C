/* 11) Considere um vetor A com 50 n�meros inteiros positivos gerados aleatoriamente de 1 a 100. Fa�a um
algoritmo para preencher outros dois vetores B e C, onde o vetor B deve conter apenas os n�meros pares do
vetor A e o vetor C deve conter apenas os n�meros �mpares do vetor A. Crie e utilize tr�s procedimentos:
um para preencher o vetor A, outro para preencher os vetores B e C, e um terceiro para imprimir os vetores B
e C ap�s o preenchimento. */

#include <stdio.h>

#define tam 5

void preencheA(int vetorA[tam]){
	int i;
	
	for(i=0;i<tam;i++)
	{
		vetorA[i] = rand () % 100 + 1;
	}
	
	for(i=0;i<tam;i++)
	{
		printf("%d\n", vetorA[i]);
	}
	
}

void preencheBC(int vetorA[tam], int vetorB[tam],int vetorC[tam]){
	int i;
	
	for(i=0;i<tam;i++)
	{
		if(vetorA[i] % 2 == 0)
		{
			vetorB[i] = vetorA[i];
			
		}
		else
		{
			vetorC[i] = vetorA[i];
		}
	}
	
}

void imprime(int vetorB[tam],int vetorC[tam]){
	int i;
	
	for(i=0;i<tam;i++)
	{
		if(vetorB[i] % 2 == 0)
		{
			printf("\nVetorB:\n%d", vetorB[i]);
		}
		else
		{
			printf("\nVetorC:\n%d", vetorC[i]);
		}
	}
	
	
}

int main(){
	int vetorA[tam],vetorB[tam],vetorC[tam];
	
	srand(time(NULL));
	
	preencheA(vetorA);
	preencheBC(vetorA,vetorB,vetorC);
	imprime(vetorB,vetorC);
	
	return 0;
}
