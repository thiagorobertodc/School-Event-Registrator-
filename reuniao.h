#ifndef REUNIAO_H
#define REUNIAO_H
#include <string>
using namespace std;	

typedef struct {
	int dia; 
	int mes; 
	string titulo; 
	string descricao;
}Item4; 

typedef struct celula4 {
	struct celula4 *pProx;
	Item4 reuniao;
}Celula4;
 
typedef struct {
	Celula4 *pPrimeiro, *pUltimo;	
} Listareuniao;


void Lista_Inicia4 (Listareuniao* raLista);
int Lista_EhVazia4 (Listareuniao* raLista);
int Lista_Insere4 (Listareuniao* rLista, Item4 reuniao);
int Lista_RemoveReuniao (Listareuniao* rLista, string nomeremocao);
void TLista_Imprime4 (Listareuniao* rLista);

#endif