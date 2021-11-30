#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "tad.h"

#define tam 50

int main() {
    tipo_arvore *raiz = NULL;
    tipo_arvore *raizCopia = NULL;
    int dado, opcao, resultado_exclusao,i,j,k,aux,cont=0;
    int vetor[tam];
    do
    {
        printf("\n\n0 - Sair\n");
        printf("1 - Incluir na arvore\n");
        printf("2 - Verificar menor numero\n");
        printf("3 - Verificar soma dos valores\n");
        printf("4 - Verificar numero de nos\n");
        printf("5 - Media dos valores\n");
        printf("6 - Numero de folhas\n");
        printf("7 - Numero de NULLs\n");
        printf("8 - Altura da arvore\n");
        printf("9 - Quantidade de multiplos de tres na arvore\n");
        printf("10 - Busca dado\n");
        printf("11 - Busca dado com quantidade de comparacoes\n");
        printf("12 - Preenche arvore randomica\n");
        printf("13 - Arvore em ordem\n");
        printf("14 - Compara busca de arvore e vetor\n");
        printf("15 - Copiar arvore\n");
        printf("16 - Mostrar valores da arvore do desenho\n");
        
        scanf("%d", &opcao);
        switch (opcao)
        {
          case 1:
          printf("Entre com um valor:");
          scanf("%d", &dado);
          incluir_dado(&raiz, dado);
          break;

          case 2: 
          printf("O menor valor e:%d", menorValor(raiz));
          break;

          case 3:
          printf("A soma dos valores dos nos e:%d\n",somaNos(raiz));
          break;

          case 4:
          printf("O numero de nos e:%d", numeroNos(raiz));
          break;

          case 5:
          printf("A media dos nos e:%.2f",mediaValores(raiz));
          break;

          case 6:
          printf("O numero de folhas e:%d", numeroFolhas(raiz));
          break;

          case 7:
          printf("O numero de NULLs e:%d", numeroNulls(raiz));
          break;

          case 8:
          printf("O tamanho da arvore e:%d", alturaArvore(raiz));
          break;

          case 9:
          printf("Existem %d numeros multiplos de 3", multiploTres(raiz));
          break;

          case 10:
          printf("Digite o valor que deseja buscar:\n");
          scanf("%d", &dado);
          if(encontrar_elemento(raiz,dado)){
            printf("O numero foi encontrado.\n");
          }
          else{
            printf("O numero nao foi encontrado");
          }
          break;

          case 11:
          printf("Digite o valor que deseja buscar:\n");
          scanf("%d", &dado);
          printf("Foram feitas %d comparacoes para encontrar o valor",encontrar_elemento_cmp(raiz,dado));
          break;

          case 12:
          for(i=0;i<1000;i++)
          {
            dado = rand() % 10000;
            if(encontrar_elemento(raiz,dado)){
              while(encontrar_elemento(raiz,dado)){
              dado = rand() % 10000;
              i--;
              break;
              }
            }
            else
            {
              incluir_dado(&raiz, dado);
            }
          }
          break;

          case 13:
          percurso_em_ordem(raiz);
          break;
          
          case 14:
          srand(1);
          for(i=0;i<50;i++)
          {
            dado = rand() % 200;
            if(encontrar_elemento(raiz,dado)){
              while(encontrar_elemento(raiz,dado)){
              dado = rand() % 200;
              i--;
              break;
              }
            }
            else
            {
              incluir_dado(&raiz, dado);
              vetor[i] = dado;
            }
          }
          for(k = 1; k < tam; k++){
            for(j=0;j<tam-1;j++){
              if(vetor[j]>vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
              }
            }
          } // ordenação do vetor bubble sort
          for(i=0;i<tam;i++){
            printf("%d ", vetor[i]);
          }
          printf("\n\n");
          percurso_em_ordem(raiz);
          printf("\n%d",raiz->dado);
          printf("\nDigite o numero que deseja buscar:\n");
          scanf("%d", &dado);
          printf("Numero de comparacoes arvore: %d\nNumero de comparacoes vetor:%d\n",encontrar_elemento_cmp(raiz,dado),buscaBinaria(vetor, dado, 0, 49, cont));
          // Em grande quantidade de valores, a busca pelo vetor é melhor, pois ele faz menos chamadas
          break;

          case 15:
          for(i=0;i<50;i++)
          {
            dado = rand() % 200;
            if(encontrar_elemento(raiz,dado)){
              while(encontrar_elemento(raiz,dado)){
              dado = rand() % 200;
              i--;
              break;
              }
            }
            else
            {
              incluir_dado(&raiz, dado);
            }
          }
          copia(raiz,&raizCopia);
          percurso_em_pre_ordem(raiz);
          printf("\n\n");
          percurso_em_pre_ordem(raizCopia);
          break;

          case 16:
          srand(225);
          for(i=0;i<10;i++)
          {
            dado = rand() % 200;
            incluir_dado(&raiz, dado);
          }
          percurso_em_pre_ordem(raiz);
          break;
        }
    } while(opcao!=0);
    system("clear");
  return 0;
}