#include <iostream>
#include <stdlib.h>
#include "profr.h"
using namespace std; 


void Lista_Inicia2 (Listaprofr* pLista){
pLista->pPrimeiro = (Celula2*) malloc (sizeof(
Celula2));
pLista->pUltimo = pLista->pPrimeiro;
pLista->pPrimeiro->pProx = NULL ;
}

int Lista_EhVazia2 (Listaprofr* pLista){
	return (pLista->pPrimeiro == pLista ->pUltimo);
}

int Lista_Insere2 (Listaprofr* pLista, Item2 professor){
pLista->pUltimo->pProx = new Celula2;
pLista->pUltimo = pLista->pUltimo->pProx;
pLista->pUltimo->pProx = NULL;

pLista->pUltimo->professor = professor;
return 1;
}

void TLista_Imprime2 (Listaprofr* pLista){ // essa parte ta tudo errrado no caso é o que eu to tentando descobrir como q faz
	Celula2* X;
	X = pLista->pPrimeiro->pProx; 
	while (X!=NULL){
		cout << X->professor.nome << " " << X->professor.idade << endl; 
		X = X->pProx;
    }
}

int Lista_RemoveProfessor (Listaprofr* pLista, string nomeremocao){
	Celula2* X = pLista->pPrimeiro;
	Celula2* aux = X;
	while (X->pProx!=NULL){
		if (X->professor.nome == nomeremocao){
			aux->pProx = X->pProx;
			delete X;
			cout << "Professor(a) removido(a) com sucesso! " << endl;
			break;
		}
	aux = X; 
	X = X->pProx;
	}
	if (X->pProx==NULL && X->professor.nome != nomeremocao)
		cout << "Professor(a) inexistente! " << endl;
		return 0;
}	