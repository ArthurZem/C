/* 4) Considere um arquivo chamado "Matriz4x4.txt" que armazena uma matriz
quadrada de ordem 4 com números inteiros. Faça um algoritmo para ler esta matriz do
arquivo e criar outro arquivo chamado "Transposta.txt" que conterá a matriz transposta
da matriz lida.
- Obs.: Utilize um procedimento para gerar a matriz transposta. */

#include <stdio.h>

#define tam 4

    void transposta(FILE *arqentrada,FILE *arqsaida, int matrizt[tam][tam]);

    int main()
    {
        int matriz[tam][tam],matrizt[tam][tam],i,j;


        FILE *arqentrada,*arqsaida;


        arqentrada = fopen("Matriz4x4.txt", "r");
        arqsaida = fopen("Transposta.txt", "w");

        if(arqentrada == NULL){
            printf("\n Erro na abertura do arquivo.");
            return 1;
        }

        while(!feof(arqentrada)){
        for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
        fscanf(arqentrada,"%d", &matriz[i][j]);
        matrizt[j][i] = matriz[i][j];
        }
        }
        }

        transposta(arqentrada,arqsaida,matrizt);

        fclose(arqentrada);
        fclose(arqsaida);
        return 0;

    }

    void transposta(FILE *arqentrada,FILE *arqsaida, int matrizt[tam][tam]){
        int i,j;

        for(i=0;i<4;i++){
        for(j=0;j<4;j++){
        fprintf(arqsaida,"%d ",matrizt[i][j]);
        }
        fprintf(arqsaida, "\n");
        }

    }
