/* 2) Fa�a um algoritmo para ler (pelo teclado) um vetor com 15 elementos inteiros e depois inverter este mesmo
vetor, sem utilizar um vetor auxiliar. Crie e utilize tr�s procedimentos: um para preencher o vetor, outro
para invert�-lo e o terceiro para imprimi-lo ap�s a invers�o.
Obs.: O objetivo deste exerc�cio n�o � imprimir o vetor em ordem inversa, mas sim colocar os elementos
dentro do vetor em ordem inversa. FEITO*/

#include <stdio.h>

#define tam 5

void preencher(int vetor[tam]){
	int i;
	printf("Digite os valores do vetor:\n");
	for(i=0;i<tam;i++)
	{
		scanf("%d", &vetor[i]);
	}
	
}

void inverter(int vetor[tam]){
	int i=0,j = tam - 1,aux;
	

	while(i<j)
	{
		aux = vetor[i];
		vetor[i] = vetor[j];
		vetor[j] = aux;
		i++;
		j--;
	}
	
	
}

void imprimir(int vetor[tam]){
	int i;
	
	for(i=0;i<tam;i++){
	printf("O vetor invertido e:\n%d\n", vetor[i]);
	}	
}

int main(){
	int vetor[tam];
	
	preencher(vetor);
	inverter(vetor);
	imprimir(vetor);
		
	return 0;
	
}
