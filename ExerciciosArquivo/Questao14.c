/* 14) Considere um arquivo chamado "Palavras.txt" que armazena em cada linha uma
palavra de no m�ximo 15 caracteres. Fa�a um algoritmo para ler pelo teclado uma
palavra (tamb�m de no m�ximo 15 caracteres) e imprimir o n�mero de vezes que essa
palavra aparece no arquivo.
- Obs.: Utilize a fun��o strcmp(str1,str2) da biblioteca string.h para comparar as
palavras. Esta fun��o retorna 0 (zero) se str1 � igual a str2. */

#include <stdio.h>
#include <string.h>
int main()
{
    char palavra1[15],palavra2[15];
    int cont=0;

    FILE *arqentrada;


    arqentrada = fopen("Palavras.txt", "r");
 if(arqentrada == NULL){
        printf("\n Erro na abertura do arquivo.");
        return 1;
    }
    printf("Digite a palavra: ");
    scanf("%s", &palavra1);
    while(!feof(arqentrada)){
      fscanf(arqentrada, "%s", &palavra2);
     if ( (strcmp(palavra1, palavra2) == 0)){
     cont++;
     }
    }
    printf("A palavra aparece no arquivo %d vezes",cont);
    fclose(arqentrada);
    return 0;

}
