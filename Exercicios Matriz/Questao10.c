/* 9) Fa�a um algoritmo que, dadas duas matrizes A e B de tamanho 10�10 geradas
aleatoriamente com n�meros de 1 at� 10, verifique se B � a inversa de A, isto �, se B �
igual a A-1. Se B for a inversa, a multiplica��o A�B resulta em uma matriz identidade.
Crie e utilize tr�s fun��es: uma para verificar se a matriz resultante de A�B � uma
matriz identidade, outra para a gera��o das matrizes e uma terceira para realizar a
multiplica��o delas. De acordo com o retorno da fun��o de verifica��o, deve-se
imprimir na fun��o main: �B E INVERSA DE A� ou �B NAO E INVERSA DE A�. */

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
