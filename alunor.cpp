#include <iostream>
#include <stdlib.h>
#include "alunor.h"
using namespace std; 


void Lista_Inicia (Listaalunor* aLista){
aLista->pPrimeiro = new Celula;
aLista->pUltimo = aLista->pPrimeiro;
aLista->pPrimeiro->pProx = NULL ;
}

int Lista_EhVazia (Listaalunor* aLista){
	return (aLista->pPrimeiro == aLista ->pUltimo);
}

int Lista_Insere (Listaalunor* aLista, Item aluno){
aLista->pUltimo->pProx = new Celula;
aLista->pUltimo = aLista->pUltimo->pProx;
aLista->pUltimo->pProx = NULL;

aLista->pUltimo->aluno = aluno;
return 1;
}

void TLista_Imprime (Listaalunor* aLista){ 
	Celula* X;
	X = aLista->pPrimeiro->pProx;
	cout << "Nome - Idade" << endl; 
	while (X!=NULL){
		cout << X->aluno.nome <<" " << X->aluno.idade << endl; 
		X = X->pProx;
    }
}

int Lista_RemoveAluno (Listaalunor* aLista, string nomeremocao){
	Celula* X = aLista->pPrimeiro;
	Celula* aux = X;
	while (X->pProx!=NULL){
		if (X->aluno.nome == nomeremocao){
			aux->pProx = X->pProx;
			delete X;
			cout << "Aluno removido com sucesso! " << endl;
			break;
		}
	aux = X; 
	X = X->pProx;
	}
	if (X->pProx==NULL && X->aluno.nome != nomeremocao)
		cout << "Aluno inexistente! " << endl;
		return 0;
}	