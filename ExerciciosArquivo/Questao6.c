/* 6) Faça um algoritmo para ler 10 números inteiros a partir de um arquivo chamado
"Numeros.txt" e depois imprima-os na tela em ordem crescente.
- Obs.: Para facilitar, leia os números do arquivo, armazene-os em um vetor e depois
ordene este vetor. Seu algoritmo deve ter um procedimento para ordenar o vetor e outro
para imprimir o vetor antes e depois da ordenação. */


#include <stdio.h>

#define tam 10

void ordenar(int num, int vetor[tam], FILE *arqentrada);
void imprimir(int num, int vetor[tam]);

int main()
{
    int num,vetor[tam],i,j,aux;

    FILE *arqentrada;


    arqentrada = fopen("Numeros.txt", "r");

    if(arqentrada == NULL){
        printf("\n Erro na abertura do arquivo.");
        return 1;
    }


    while(!feof(arqentrada)){

    ordenar(num, vetor, arqentrada);
}

    imprimir(num,vetor);
    fclose(arqentrada);
    return 0;

}

void ordenar(int num, int vetor[tam], FILE *arqentrada){
	int i,j,aux;
	
    fscanf(arqentrada, "%d", &num);
    for(i=0;i<tam;i++){
    for(j=i+1;j<tam;j++){
        if(vetor[i] > vetor[j]){
            aux=vetor[i];
            vetor[i]=vetor[j];
            vetor[j]=aux;
        }
    }
}
}

void imprimir(int num,int vetor[tam]){
	int i,j;
	
    for(i=0;i<tam;i++){
        printf("%d", num);
    }
}
