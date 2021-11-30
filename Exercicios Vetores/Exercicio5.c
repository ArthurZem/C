/* 5) Faça um algoritmo para ler (pelo teclado) os 10 elementos de um vetor do tipo inteiro e vericar se os
mesmos formam uma progressão aritmética. Crie e utilize um procedimento para preencher o vetor e uma
função para a vericação. A impressão da informação (se os elementos do vetor formam ou não uma progressão
aritmética) deve ser na função main. FEITO */

#include <stdio.h>

#define tam 10

void preencher(int vetor[tam]){
	int i=0;
	
	printf("Insira os valores para serem postos no vetor:\n");
	for(i=0;i<tam;i++)
	{
		scanf("%d", &vetor[i]);
	}
	
}

int verificar(int vetor[tam]){
	int i=0,aux;
	
	aux = vetor[1] - vetor[0];
	for(i=0;i<tam-1;i++)
	{
		if(vetor[i+1] - vetor[i] != aux)
		{
			return 0;
		}		
	}
	return 1;
}

int main(){
	int vetor[tam];
	
	preencher(vetor);
	if(verificar(vetor))
	{
		printf("O vetor e uma progressao aritmetica");
	}
	else
	{
		printf("O vetor nao e uma progressao aritmetica");
	}
	
	return 0;
	
}
