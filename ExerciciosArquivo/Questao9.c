/* 9) Fa�a um algoritmo para gerar uma matriz 10 x 10 aleatoriamente com n�meros de
0 at� 39, com exce��o dos elementos da diagonal principal, que devem ser gerados
aleatoriamente com n�meros de 1 at� 50. A matriz gerada deve ser armazenada no
arquivo "Matriz10x10.txt". */ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int matriz[10][10];
    int i,j;
    FILE *arqSaida;
    
    srand(time(NULL));

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(i==j){
                matriz[i][j]=rand() % 50+1;
			}
            else
                matriz[i][j]=rand () % 40;
        }

    }
    arqSaida=fopen("Matriz10x10.txt","w");

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            fprintf(arqSaida,"%d ",matriz[i][j]);
        }
        fprintf(arqSaida, "\n", matriz[i][j]);
    }
    fclose(arqSaida);
    return 0;
}
