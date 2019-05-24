#ifndef MANIFEST_H
#define MANIFEST_H
#include <string>
using namespace std;	

typedef struct {
	int dia; 
	int mes;
	string titulo; 
	string descricao;
}Item5; 

typedef struct celula5 {
	struct celula5 *pProx;
	Item5 manifest;
}Celula5;
 
typedef struct {
	Celula5 *pPrimeiro, *pUltimo;	
} Listamanifest;


void Lista_Inicia5 (Listamanifest* mLista);
int Lista_EhVazia5 (Listamanifest* mLista);
int Lista_Insere5 (Listamanifest* mLista, Item5 manifest);
int Lista_RemoveManifestacao (Listamanifest* mLista, string nomeremocao);
void TLista_Imprime5 (Listamanifest* mLista);

#endif