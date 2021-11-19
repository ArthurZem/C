/* 13) Fa�a um algoritmo para imprimir o n�mero de palavras (de no m�ximo 20
caracteres) presentes no arquivo "Texto.txt". Considere que o arquivo n�o possui
qualquer n�mero, somente palavras. */


#include <stdio.h>
#include <string.h>
int main()
{
    char palavra[20];
    int cont=0;

    FILE *arqentrada;


    arqentrada = fopen("Texto.txt", "r");
 if(arqentrada == NULL){
        printf("\n Erro na abertura do arquivo.");
        return 1;
    }
    while(!feof(arqentrada)){
      fscanf(arqentrada, "%s", &palavra);
     cont++;
    }
    fclose(arqentrada);
    printf("Existem %d palavras no arquivo.",cont);
    return 0;
}
