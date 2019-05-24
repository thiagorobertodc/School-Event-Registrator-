#include <iostream>
#include <stdlib.h>
#include "itens.h"
using namespace std; 


void Lista_Inicia6 (Listaitens* iLista){
iLista->pPrimeiro = (Celula6*) malloc (sizeof(
Celula6));
iLista->pUltimo = iLista->pPrimeiro;
iLista->pPrimeiro->pProx = NULL ;
}

int Lista_EhVazia6 (Listaitens* iLista){
	return (iLista->pPrimeiro == iLista ->pUltimo);
}

int Lista_Insere6 (Listaitens* iLista, Item6 item){
iLista->pUltimo->pProx = new Celula6;
iLista->pUltimo = iLista->pUltimo->pProx;
iLista->pUltimo->pProx = NULL;

iLista->pUltimo->item = item;
return 1;
}

void TLista_Imprime6 (Listaitens* iLista){ 
	Celula6* X;
	X = iLista->pPrimeiro->pProx; 
	cout << "LEGENDA DOS TIPOS: 1)ALIMENTO 2)CAMA 3)UTENSILIO" << endl;
	while (X!=NULL){
		cout << "Tipo: " << X->item.tipo << "Item: " << X->item.nome << endl; 
		X = X->pProx;
    }
}

int Lista_RemoveItem (Listaitens* iLista, string nomeremocao){
	Celula6* X = iLista->pPrimeiro;
	Celula6* aux = X;
	while (X->pProx!=NULL){
		if (X->item.nome == nomeremocao){
			aux->pProx = X->pProx;
			delete X;
			cout << "Item removido com sucesso! " << endl;
			break;
		}
	aux = X; 
	X = X->pProx;
	}
	if (X->pProx==NULL && X->item.nome != nomeremocao)
		cout << "Item inexistente! " << endl;
		return 0;
}	
