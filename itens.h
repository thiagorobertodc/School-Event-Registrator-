#ifndef ITENS_H
#define ITENS_H
#include <string>
using namespace std;	

typedef struct {
	int tipo; 
	string nome;
}Item6; 

typedef struct celula6 {
	struct celula6 *pProx;
	Item6 item;
}Celula6;
 
typedef struct {
	Celula6 *pPrimeiro, *pUltimo;	
} Listaitens;


void Lista_Inicia6 (Listaitens* iLista);
int Lista_EhVazia6 (Listaitens* iLista);
int Lista_Insere6 (Listaitens* iLista, Item6 itens);
int Lista_RemoveItem (Listaitens* iLista, string nomeremocao);
void TLista_Imprime6 (Listaitens* iLista);

#endif