/* 10) Faça um algoritmo para ler pelo teclado dois vetores A e B, cada um contendo 15 números inteiros, e em
seguida preencher um vetor C, sendo que Ci = 2Ai+Bi, onde 0  i  14. Crie e utilize três procedimentos:
um para ler os elementos dos vetores A e B, outro para preencher o vetor C e um terceiro para imprimir o vetor
C após o preenchimento. FEITA */

#include <stdio.h>

#define tam 3

void ler(int vetA[tam],int vetB[tam]){
	int i;
	
	for(i=0;i<tam;i++){
		printf("Digite o valor para ser posto no vetor A:\n");
		scanf("%d", &vetA[i]);
	}
	for(i=0;i<tam;i++){
		printf("Digite o valor para ser posto no vetor B:\n");
		scanf("%d", &vetB[i]);
	}
}

void preencherC(int vetA[tam],int vetB[tam],int vetC[tam]){
	int i;
	
	for(i=0;i<tam;i++){
		vetC[i] = 2 * vetA[i] + vetB[i];
	}
	
}

void imprimir(int vetC[tam]){
	int i;
	
	for(i=0;i<tam;i++){
		printf("Vetor C posicao %d: %d\n", i+1,vetC[i]);
	}
}

int main(){
	int vetA[tam],vetB[tam],vetC[tam];
	
	ler(vetA,vetB);
	preencherC(vetA,vetB,vetC);
	imprimir(vetC);
	
	return 0;
}
