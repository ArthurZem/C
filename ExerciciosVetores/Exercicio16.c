/*16) Fa�a um algoritmo para ler (pelo teclado) os 30 elementos de um vetor do tipo inteiro e verificar se o mesmo
est� em ordem n�o-crescente. Crie e utilize um procedimento para preencher o vetor e uma fun��o para a
verifica��o. A impress�o da informa��o (se o vetor est� ou n�o em ordem n�o-crescente) deve ser na fun��o
main. FEITA*/



#include <stdio.h>

#define tam 30

void preencher(int vetor[tam]){
	int i=0;
	
	printf("Insira os 30 valores do vetor:\n");
	for(i=0;i<tam;i++){
		scanf("%d", &vetor[i]);
	}
	
}

int verificar(int vetor[tam]){
	int i=0,cont=0;
	
	for(i=0; i<tam;i++){
	if(vetor[i] < vetor[i+1]){
		cont++;
	}
		
	}
	return cont;
}


int main(){
	int vetor[tam], aux=0;
	
	preencher(vetor);
	aux=verificar(vetor);
	if(aux==0)
	{
		printf("O vetor esta em ordem decrescente");
	}
	else{
		printf("O vetor nao esta em ordem decrescente");
	}

return 0;
}
