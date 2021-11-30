/*1) Faça um algoritmo para verificar se um número real lido pelo teclado encontra-se ou não em um vetor com
30 números reais (também lido pelo teclado). Crie e utilize um procedimento para preencher o vetor e uma
função para vericar se o número pertence ou não ao vetor. A impressão desta informação (se o número
pertence ou não ao vetor) deve ser na função main. FEITO */ 

#include <stdio.h>

#define tam 3

void preencher(float vetor[tam]){
	int i=0;
	
	printf("Digite os 30 valores do vetor:\n");
	for(i=0;i<tam;i++)
	{
		scanf("%f", &vetor[i]);
	}
}

int verificar(float vetor[tam]){
	int i=0;
	float n;
	
	printf("Digite o valor que devera ser verificado:\n");
	scanf("%f", &n);
	for(i=0;i<tam;i++)
	{
		if(vetor[i] == n)
		{
			return 1;
		}
	}
	return 0;
}

int main(){
	float vetor[tam];
		
	preencher(vetor);
	if(verificar(vetor))
	{
		printf("O valor esta dentro do vetor");
	}
	else
	{
		printf("O valor nao esta dentro do vetor");
	}
}
