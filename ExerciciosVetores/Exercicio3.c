/* 3) Considere um vetor com 40 números inteiros positivos gerados aleatoriamente de 1 a 100. Faça um algoritmo
para verificar o número de vezes que um número inteiro positivo n lido pelo teclado aparece neste vetor. O
programa também deve informar em quais posições (índices) do vetor o número aparece, caso ele pertença ao
vetor. Crie e utilize duas funções: uma para preencher o vetor e outra para realizar a verificação.
Obs. 1: O seu programa deve verificar primeiro quantas vezes o número n aparece no vetor. Depois, se ele
aparecer alguma vez no vetor, imprimir as posições que ele aparece. Se ele não pertencer ao vetor, seu programa
deve imprimir: "Número não pertence ao vetor".
Obs. 2: O exemplo da Figura 1 preenche e imprime um vetor com 10 números inteiros positivos de 1 até 10
gerados aleatoriamente. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 40

void preencher(int vetor[tam]){
	int i;
	srand(time(NULL));
	
	for(i=0;i<tam;i++){
		vetor[i] = rand() % 100 +1;
		printf("%d ", vetor[i]);	 
	}
	
} 

void verificar(int vetor[tam]){
	int i,n,cont=0;
	
	printf("\nDigite o valor para ser verificado:\n");
	scanf("%d", &n);
	
	for(i=0;i<tam;i++){
		if(n == vetor[i]){
			cont++;
		}
	}
	if(cont>0){
		printf("O numero apareceu %d vezes no vetor.\n", cont);
		for(i=0;i<tam;i++){
			if(n == vetor[i]){
				printf("Vetor aparece na posicao %d\n", i);
			}
		}
	}
	if(cont==0){
		printf("Numero nao pertence ao vetor");
	}
	
}

int main(){
	
	int vetor[tam];
	
	
	preencher(vetor);
	verificar(vetor);
	
	return 0;
	
}
