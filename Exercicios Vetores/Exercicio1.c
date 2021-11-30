/*1) Fa�a um algoritmo para verificar se um n�mero real lido pelo teclado encontra-se ou n�o em um vetor com
30 n�meros reais (tamb�m lido pelo teclado). Crie e utilize um procedimento para preencher o vetor e uma
fun��o para vericar se o n�mero pertence ou n�o ao vetor. A impress�o desta informa��o (se o n�mero
pertence ou n�o ao vetor) deve ser na fun��o main. FEITO */ 

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
