#ifndef PALESTRA_H
#define PALESTRA_H
#include <string>
using namespace std;	

typedef struct {
	int dia; 
	int mes; 
	string titulo;
	string local;
	string descricao;
}Item3; 

typedef struct celula3 {
	struct celula3 *pProx;
	Item3 palestra;
}Celula3;
 
typedef struct {
	Celula3 *pPrimeiro, *pUltimo;	
} Listapalestra;


void Lista_Inicia3 (Listapalestra* paLista);
int Lista_EhVazia3 (Listapalestra* paLista);
int Lista_Insere3 (Listapalestra* paLista, Item3 palestra);
int Lista_RemovePalestra (Listapalestra* paLista, string nomeremocao);
void TLista_Imprime3 (Listapalestra* paLista);

#endif