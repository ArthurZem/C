#include <stdio.h>
#include <stdlib.h>

typedef struct reg_no
{
  struct reg_no *ptr_esquerda;  
  struct reg_no *ptr_direita;
  int dado;
} tipo_arvore;

void incluir_dado(tipo_arvore **sub_raiz, int dado);
int menorValor(tipo_arvore *sub_raiz);
int somaNos(tipo_arvore *sub_raiz);
int numeroNos(tipo_arvore *sub_raiz);
float mediaValores(tipo_arvore *sub_raiz);
int numeroFolhas(tipo_arvore *sub_raiz);
int numeroNulls(tipo_arvore *sub_raiz);
int alturaArvore(tipo_arvore *sub_raiz);
int multiploTres(tipo_arvore *sub_raiz);
int encontrar_elemento(tipo_arvore *sub_raiz, int dado);
int encontrar_elemento_cmp(tipo_arvore *sub_raiz, int dado);
void percurso_em_ordem(tipo_arvore *sub_raiz);
int buscaBinaria(int vet[50],int valor, int menor,int maior,int cont);
void copia(tipo_arvore *sub_raiz, tipo_arvore **sub_raizcopia);
void percurso_em_pre_ordem(tipo_arvore *sub_raiz);