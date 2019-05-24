#include <iostream>
#include <stdlib.h>
#include "manifest.h"
using namespace std; 


void Lista_Inicia5 (Listamanifest* mLista){
mLista->pPrimeiro = (Celula5*) malloc (sizeof(
Celula5));
mLista->pUltimo = mLista->pPrimeiro;
mLista->pPrimeiro->pProx = NULL ;
}

int Lista_EhVazia5 (Listamanifest* mLista){
	return (mLista->pPrimeiro == mLista ->pUltimo);
}

int Lista_Insere5 (Listamanifest* mLista, Item5 manifest){
mLista->pUltimo->pProx = new Celula5;
mLista->pUltimo = mLista->pUltimo->pProx;
mLista->pUltimo->pProx = NULL;

mLista->pUltimo->manifest = manifest;
return 1;
}

void TLista_Imprime5 (Listamanifest* mLista){ // essa parte ta tudo errrado no caso é o que eu to tentando descobrir como q faz
	Celula5* X;
	X = mLista->pPrimeiro->pProx; 
	while (X!=NULL){
		cout << X->manifest.dia << "/" << X->manifest.mes << endl; 
		cout << X->manifest.titulo<< endl << X->manifest.descricao << endl;
		X = X->pProx;
    }
}

int Lista_RemoveManifestacao (Listamanifest* mLista, string nomeremocao){
	Celula5* X = mLista->pPrimeiro;
	Celula5* aux = X;
	while (X->pProx!=NULL){
		if (X->manifest.titulo == nomeremocao){
			aux->pProx = X->pProx;
			delete X;
			cout << "Manifestacao cancelada com sucesso! " << endl;
			break;
		}
	aux = X; 
	X = X->pProx;
	}
	if (X->pProx==NULL && X->manifest.titulo != nomeremocao)
		cout << "Manifestacao inexistente! " << endl;
		return 0;
}	
