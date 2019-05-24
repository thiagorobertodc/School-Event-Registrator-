#ifndef ALUNOR_H
#define ALUNOR_H
#include <string>
using namespace std;	

typedef struct {
	string nome; 
	int idade;
}Item; 

typedef struct celula {
	struct celula *pProx;
	Item aluno;
}Celula;
 
typedef struct {
	Celula *pPrimeiro, *pUltimo;	
} Listaalunor;


void Lista_Inicia (Listaalunor* aLista);
int Lista_EhVazia (Listaalunor* aLista);
int Lista_Insere (Listaalunor* aLista, Item aluno);
int Lista_RemoveAluno (Listaalunor* aLista, string nomeremocao);
void TLista_Imprime (Listaalunor* aLista);

#endif