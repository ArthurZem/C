/* 9) Faça um algoritmo que, dadas duas matrizes A e B de tamanho 10×10 geradas
aleatoriamente com números de 1 até 10, verifique se B é a inversa de A, isto é, se B é
igual a A-1. Se B for a inversa, a multiplicação A×B resulta em uma matriz identidade.
Crie e utilize três funções: uma para verificar se a matriz resultante de A×B é uma
matriz identidade, outra para a geração das matrizes e uma terceira para realizar a
multiplicação delas. De acordo com o retorno da função de verificação, deve-se
imprimir na função main: “B E INVERSA DE A” ou “B NAO E INVERSA DE A”. */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 10


void geraMat(int matA[TAM][TAM], int matB[TAM][TAM]){
  int i,j;
  for(i=0;i<TAM;i++){
    for(j=0;j<TAM;j++){
      matA[i][j]= rand()%10+1;
      matB[i][j]= rand()%10+1;
      
    }
    printf("%d ",matA[i][j]);
    printf("\n\n%d ",matB[i][j]);

  }
}

void multMat(int matA[TAM][TAM], int matB[TAM][TAM], int matC[TAM][TAM]){
  int i,j,k,aux;
  
  for(i=0;i<TAM;i++){
    for(j=0;j<TAM;j++){
      matC[i][j]=0;
      for(k=0;k<TAM;k++){
       aux += (matA[i][k]*matB[k][j]); 
      }
      matC[i][j] = aux;
      aux = 0;
    }
  }
}

int verificaMat(int matC[TAM][TAM]){
  int i,j;
  for(i=0;i<TAM;i++){
    for(i=0;i<TAM;i++){
      if(i==j){
        if(matC[i][j]!=1){
          return 0;
        }
      }
      else{
        if(matC[i][j]!=0){
          return 0;
        }
      }
    }
  }
  return 1;

}


int main(void) {
  int matA[TAM][TAM], matB[TAM][TAM],matC[TAM][TAM];

  srand(time(NULL));

  geraMat(matA,matB);
  multMat(matA,matB,matC);
  if(verificaMat(matC)){
    printf("B e inversa de A");
  }
  else{
    printf("B nao inversa de A ");
  }
  return 0;
}
