/* 17) Faça um algoritmo que preencha o vetor A com 20 números inteiros gerados aleatoriamente de 0 até 10.
Em seguida, preencha o vetor B onde cada elemento Bi receba o fatorial do elemento Ai, com 0 < i < 19. Crie
e utilize dois procedimentos: um para preencher o vetor A e outro para preencher o vetor B. Crie e utilize
também uma função para calcular o fatorial de um número. */

#include <stdio.h>

#define tam 5

void vetorA(int vetA[tam]){
	int i;
	
	for(i=0;i<tam;i++)
	{
		vetA[i] = rand() % 10;
	}
		
}

int calculaFatorial(int vetA[tam]){
	int i,k=0,resultado;
	
		for(i=1;i<vetA[k];i++,k++)
		{
			resultado+= i*vetA[k];
			return resultado;
		}
	return 0;
}
void vetorB(int vetB[tam],int vetA[tam]){
	int i;
	
	for(i=0;i<tam;i++)
	{
		vetB[i] = calculaFatorial(vetA);
	}
	
	for(i=0;i<tam;i++)
	{
		printf("Vetor B posicao %d: %d\n", i+1,vetB[i]);
	}
}

int main(){
	int vetA[tam],vetB[tam],resultado;
	
	srand(time(NULL));
	
	
	vetorA(vetA);
	resultado = calculaFatorial(vetA);
	vetorB(vetB);
	
	return 0;
}
