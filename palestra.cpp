#include <iostream>
#include <stdlib.h>
#include "palestra.h"
using namespace std; 


void Lista_Inicia3 (Listapalestra* paLista){
paLista->pPrimeiro = (Celula3*) malloc (sizeof(
Celula3));
paLista->pUltimo = paLista->pPrimeiro;
paLista->pPrimeiro->pProx = NULL ;
}

int Lista_EhVazia3 (Listapalestra* paLista){
	return (paLista->pPrimeiro == paLista ->pUltimo);
}

int Lista_Insere3 (Listapalestra* paLista, Item3 palestra){
paLista->pUltimo->pProx = new Celula3;
paLista->pUltimo = paLista->pUltimo->pProx;
paLista->pUltimo->pProx = NULL;

paLista->pUltimo->palestra = palestra;
return 1;
}

void TLista_Imprime3 (Listapalestra* paLista){ 
	Celula3* X;
	X = paLista->pPrimeiro->pProx; 
	while (X!=NULL){
		cout << "Titulo: " << X->palestra.titulo << endl << "Descricao: " << X->palestra.descricao << endl; 
		cout << "Data: " << X->palestra.dia << "/" << X->palestra.mes << endl;
		cout << "Local: " << X->palestra.local << endl;
		X = X->pProx;
    }
}

int Lista_RemovePalestra (Listapalestra* paLista, string nomeremocao){
	Celula3* X = paLista->pPrimeiro;
	Celula3* aux = X;
	while (X->pProx!=NULL){
		if (X->palestra.titulo == nomeremocao){
			aux->pProx = X->pProx;
			delete X;
			cout << "Palestra cancelada com sucesso! " << endl;
			break;
		}
	aux = X; 
	X = X->pProx;
	}
	if (X->pProx==NULL && X->palestra.titulo != nomeremocao)
		cout << "Palestra inexistente! " << endl;
		return 0;
}	