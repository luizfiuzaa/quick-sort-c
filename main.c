#include <stdio.h>
#include<stdbool.h>
#include <time.h>
#define TAM 6
#define N_intervalo 100


int gera_numero(int intervalo)
{   int numero;
	numero = rand()%intervalo;
	return numero;
}

void gera_vetor_aleat(int vetor[], int tamanho, int intervalo)
{   int cont;
    for (cont = 0; cont < tamanho; cont++) {
        vetor[cont] = gera_numero(intervalo);
    }	
}

// Função para imprimir os elementos de um vetor
void imprimirVetor(int vetor[], int tamanho) {
	int cont;
    printf("Elementos do vetor:\n");
    for (cont = 0; cont < tamanho; cont++) {
        printf("\n [%d]  - %d ", cont, vetor[cont]);
    }
    printf("\n");
}


void swap(int vetor[], int pos_1, int pos_2)
{
  int aux = pos_1;
  vetor[pos_1] = vetor[pos_2];
  vetor[pos_2] = vetor[aux];
}

int particiona(int vetor[], int left, int right) 
{
    
    
    return 0; 
}


void ordenacao_quick(int vetor[], int left, int right)
{
   
   if (left < right){
	    int index_pivot = particiona(vetor, left, right);
	    ordenacao_quick(vetor, left, index_pivot - 1);
	    ordenacao_quick(vetor, index_pivot + 1, right);	
	}   

    return ;  	
}

int main() {
    int pos_busca;
	int vetor_num[TAM];
	int numero_busca;
    srand(time(NULL));

    gera_vetor_aleat(vetor_num, TAM, N_intervalo);
   
    printf("\n ---------------------------------------------------------");
    printf("\n   Vetor Original  \n ");
    imprimirVetor(vetor_num, TAM);
    printf("\n ----------------------- \n ");
	   
	ordenacao_quick(vetor_num, 0, TAM-1);
	
    printf("\n ---------------------------------------------------------");
    printf("\n   Vetor Ordenado - Quick - v.1  \n ");
    imprimirVetor(vetor_num, TAM);
    printf("\n ----------------------- \n ");	

    printf("\n\n\n ---------------------------------------------------------");
    printf("\n    FIM   ");
    printf("\n ---------------------------------------------------------");
    return 0 ;
}

