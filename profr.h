#ifndef PROFR_H
#define PROFR_H
#include <string>
using namespace std;	

typedef struct {
	string nome; 
	int idade;
}Item2; 

typedef struct celula2 {
	struct celula2 *pProx;
	Item2 professor;
}Celula2;
 
typedef struct {
	Celula2 *pPrimeiro, *pUltimo;	
} Listaprofr;


void Lista_Inicia2 (Listaprofr* pLista);
int Lista_EhVazia2 (Listaprofr* pLista);
int Lista_Insere2 (Listaprofr* pLista, Item2 professor);
int Lista_RemoveProfessor (Listaprofr* pLista, string nomeremocao);
void TLista_Imprime2 (Listaprofr* pLista);

#endif