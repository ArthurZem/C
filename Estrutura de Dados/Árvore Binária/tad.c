#include <stdio.h>
#include <stdlib.h>

#define tam 50

typedef struct reg_no
{
  struct reg_no *ptr_esquerda;  
  struct reg_no *ptr_direita;
  int dado;
} tipo_arvore;

void incluir_dado(tipo_arvore **sub_raiz, int dado){

  if(*sub_raiz == NULL){
    *sub_raiz = (tipo_arvore*)malloc(sizeof(tipo_arvore));
    (*sub_raiz)->dado =  dado;
    (*sub_raiz)->ptr_esquerda = NULL;
    (*sub_raiz)->ptr_direita = NULL;
  }
  else{
    if(dado  > (*sub_raiz)->dado)
    {
      incluir_dado(&((*sub_raiz)->ptr_direita),dado);
    }
    if(dado < (*sub_raiz)->dado)
    {
      incluir_dado(&((*sub_raiz)->ptr_esquerda), dado);
    }    
  }
}

int menorValor(tipo_arvore *sub_raiz){

  if(sub_raiz->ptr_esquerda!=NULL)
  {
    return menorValor(sub_raiz->ptr_esquerda);
  }
  else{
    return sub_raiz->dado;
  }
}

int somaNos(tipo_arvore *sub_raiz){

  if(sub_raiz!=NULL)
  {
    return somaNos(sub_raiz->ptr_esquerda) + sub_raiz->dado + somaNos(sub_raiz->ptr_direita);
  }
  return 0;
  }


int numeroNos(tipo_arvore *sub_raiz){
  int cont=0;

  if(sub_raiz!=NULL)
  {
    cont++;
    return numeroNos(sub_raiz->ptr_esquerda) + cont + numeroNos(sub_raiz->ptr_direita);
  }
  else{
    return 0;
  }
}

float mediaValores(tipo_arvore *sub_raiz){

  if(sub_raiz!=NULL)
  {
   return (float) somaNos(sub_raiz)/numeroNos(sub_raiz);
  }
  return 0;
}

int numeroFolhas(tipo_arvore *sub_raiz){
  int cont = 0;
  
  if(sub_raiz!=NULL)
  {
    if(sub_raiz->ptr_direita == NULL && sub_raiz->ptr_esquerda == NULL)
    {
      cont ++;
    }
    return numeroFolhas(sub_raiz->ptr_esquerda) + cont + numeroFolhas(sub_raiz->ptr_direita);
  }
  else{
    return 0;
  }
}

int numeroNulls(tipo_arvore *sub_raiz){
  int cont = 0;
  
  if(sub_raiz!=NULL)
  {
    if(sub_raiz->ptr_esquerda == NULL){
      cont++;
    }
    if(sub_raiz->ptr_direita == NULL){
      cont++;
    }
    return numeroNulls(sub_raiz->ptr_esquerda) + cont + numeroNulls(sub_raiz->ptr_direita);
  }
  else{
    return 0;
  }
}

int alturaArvore(tipo_arvore *sub_raiz){
  int cont_esq = 0, cont_dir = 0;

  if(sub_raiz!=NULL){
    if(sub_raiz->ptr_esquerda!=NULL){
      cont_esq++;
      return alturaArvore(sub_raiz->ptr_esquerda) + cont_esq;
    }
    if(sub_raiz->ptr_direita!=NULL){
      cont_dir++;
      return alturaArvore(sub_raiz->ptr_direita) + cont_dir;
    }
  }
  else{
    if(cont_esq>cont_dir){
    return cont_esq;
  }
  if(cont_dir>cont_esq){
    return cont_dir;
  }
  }
  return 0;
}

int multiploTres(tipo_arvore *sub_raiz){
  int cont=0;

  if(sub_raiz!=NULL){
    if(sub_raiz->dado%3==0)
    {
      cont++;
    }
    return multiploTres(sub_raiz->ptr_esquerda) + cont + multiploTres(sub_raiz->ptr_direita);
  }
  else{
    return 0;
  }
}

int encontrar_elemento(tipo_arvore *sub_raiz, int dado)
{
    if (sub_raiz == NULL)
    {
        return 0;
    }
    else
    {
        if (dado == sub_raiz->dado)
        {
            return 1;
        }
        else
        {
            if (dado < sub_raiz->dado)
            {
                return encontrar_elemento(sub_raiz->ptr_esquerda, dado);
            }
            else
            {
                if (dado > sub_raiz->dado)
                {
                    return encontrar_elemento(sub_raiz->ptr_direita, dado);
                }
            }
        }
    }
}

int encontrar_elemento_cmp(tipo_arvore *sub_raiz, int dado)
{
  int cont = 0;
    if (sub_raiz == NULL)
    {
        return 0;
    }
    else
    {
        if (dado == sub_raiz->dado)
        {
            return cont;
        }
        else
        {
            if (dado < sub_raiz->dado)
            {
                cont++;
                return encontrar_elemento_cmp(sub_raiz->ptr_esquerda, dado) + cont;
            }
            else
            {
                if (dado > sub_raiz->dado)
                {
                    cont++;
                    return encontrar_elemento_cmp(sub_raiz->ptr_direita, dado) + cont;
                }
            }
        }
    }
}

void percurso_em_ordem(tipo_arvore *sub_raiz)
{
    if (sub_raiz != NULL)
    {
        percurso_em_ordem(sub_raiz->ptr_esquerda);
        printf("%d ", sub_raiz->dado);
        percurso_em_ordem(sub_raiz->ptr_direita);
    }
}


int buscaBinaria(int vet[50],int valor, int menor,int maior,int cont){
  int i=0;

  i = (menor + maior)/2;
  cont = cont +1;


  if(vet[i]==valor)
  {
    return cont;
  }
  if(vet[i]>valor)
  {
    return buscaBinaria(vet,valor,menor,i-1,cont);
  }
  if(vet[i]<valor){
    return buscaBinaria(vet, valor, i+1, maior,cont);
  }
  else
    {
    return -1;
  }
}

void copia(tipo_arvore *sub_raiz, tipo_arvore **sub_raizcopia){

  if(sub_raiz != NULL){
    incluir_dado(sub_raizcopia, sub_raiz->dado);

    copia(sub_raiz->ptr_esquerda, sub_raizcopia);
    copia(sub_raiz->ptr_direita,sub_raizcopia);  
  }



}

void percurso_em_pre_ordem(tipo_arvore *sub_raiz)
{
    if (sub_raiz != NULL)
    {
        printf("%d ", sub_raiz->dado);
        percurso_em_pre_ordem(sub_raiz->ptr_esquerda);
        percurso_em_pre_ordem(sub_raiz->ptr_direita);
    }
}