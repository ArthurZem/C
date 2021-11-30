/* 10) Considere um arquivo chamado "Matriz4x5.txt" que armazena uma matriz de
tamanho 4 x 5 de números inteiros. Faça um algoritmo para ler essa matriz do arquivo,
trocar a primeira linha com a quarta e imprimir a nova matriz no arquivo chamado
"MatrizAlterada.txt". A matriz que receberá os valores lidos do arquivo deve ser
criada na função main( ) e não deve ser utilizada uma matriz auxiliar para realizar a
troca das linhas.
Utilize três procedimentos: um para ler a matriz do arquivo de entrada, outro para
realizar a troca das linhas e um terceiro para imprimir no arquivo de saída a matriz
alterada. */

#include <stdio.h>
#define l 4
#define c 5

void ler(int mat[l][c], FILE *arqentrada){
	int i,j;
	
	arqentrada = fopen("Matriz4x5.txt", "r");
	
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			fscanf(arqentrada, "%d", mat[i][j]);
		}
	}
	
}

void troca(int mat[l][c], FILE *arqentrada){
	int i,j,k=0,aux;
	
for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
    	if(i==3){
        aux = mat[i][j];
        mat[i][j] = mat[k][j];
        mat[k][j] = aux;
        printf("%d ", mat[i][j]);
    	}
    }
    printf("\n");
}

}

void imprimir(int mat[l][c], FILE *arqentrada, FILE *arqsaida){
	int i,j;
	
	arqsaida=fopen("Matriz10x10.txt","w");
	
	for (i = 0; i < l; i++) {
    	for (j = 0; j < c; j++) {
			fprintf(arqsaida,"%d ", mat[i][j]);
		}
		fprintf(arqsaida,"\n");
	}
	
}

int main(){
	int mat[l][c];
	
	FILE *arqentrada,*arqsaida;
	
	ler(mat, arqentrada);
	troca(mat, arqentrada);
	imprimir(mat, arqentrada, arqsaida);
	
	
	return 0;
}
