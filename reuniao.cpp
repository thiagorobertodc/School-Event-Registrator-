#include <iostream>
#include <stdlib.h>
#include "reuniao.h"
using namespace std; 


void Lista_Inicia4 (Listareuniao* rLista){
rLista->pPrimeiro = (Celula4*) malloc (sizeof(
Celula4));
rLista->pUltimo = rLista->pPrimeiro;
rLista->pPrimeiro->pProx = NULL ;
}

int Lista_EhVazia4 (Listareuniao* rLista){
	return (rLista->pPrimeiro == rLista ->pUltimo);
}

int Lista_Insere4 (Listareuniao* rLista, Item4 reuniao){
rLista->pUltimo->pProx = new Celula4;
rLista->pUltimo = rLista->pUltimo->pProx;
rLista->pUltimo->pProx = NULL;

rLista->pUltimo->reuniao = reuniao;
return 1;
}

void TLista_Imprime4 (Listareuniao* rLista){ 
	Celula4* X;
	X = rLista->pPrimeiro->pProx; 
	while (X!=NULL){
		cout << "Data: " << X->reuniao.dia << "/" << X->reuniao.mes << endl; 
        cout << "Titulo: " << X->reuniao.titulo << endl << "Descricao: " << X->reuniao.descricao << endl; 
		X = X->pProx;
    }
}

int Lista_RemoveReuniao (Listareuniao* rLista, string nomeremocao){
	Celula4* X = rLista->pPrimeiro;
	Celula4* aux = X;
	while (X->pProx!=NULL){
		if (X->reuniao.titulo == nomeremocao){
			aux->pProx = X->pProx;
			delete X;
			cout << "Reuniao cancelada com sucesso! " << endl;
			break;
		}
	aux = X; 
	X = X->pProx;
	}
	if (X->pProx==NULL && X->reuniao.titulo != nomeremocao)
		cout << "Reuniao inexistente! " << endl;
		return 0;
}	
