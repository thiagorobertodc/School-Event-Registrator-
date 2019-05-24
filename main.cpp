#include <iostream>
#include <cstdlib> 
#include <cstdio>
#include <string>  
#include "alunor.h" 
#include "profr.h"
#include "palestra.h"
#include "reuniao.h"
#include "manifest.h"
#include "itens.h"

using namespace std; 

int main(){
	Listaalunor ar;
	Listaprofr pr; 
	Listapalestra pa;
	Listareuniao ra;
	Listamanifest mn;
	Listaitens it;
	Lista_Inicia(&ar);
	Lista_Inicia2(&pr);
	Lista_Inicia3(&pa);
	Lista_Inicia4(&ra);
	Lista_Inicia5(&mn);
	Lista_Inicia6(&it);
	string nomeremocao;
	bool var = 	true; 
	do{
		cout << "BEM VINDO A FERRAMENTA DE GERENCIAMENTO DE DADOS DAS OCUPACOES ESTUDANTIS 2016-2017" << endl; 
		cout << "A seguir, algumas opcoes do nosso programa: " << endl; 
		cout << "1) Registrar um aluno" << endl; 
		cout << "2) Registrar um professor" << endl;
		cout << "3) Registrar um evento" << endl; 
		cout << "4) Checar lista de eventos" << endl; 
		cout << "5) Checar lista de alunos" << endl;
		cout << "6) Checar lista de professores" << endl; 
		cout << "7) Checar lista de itens" << endl;
		cout << "8) Remove aluno " << endl;
		cout << "9) Remove professor " << endl; 
		cout << "10) Remove evento "  << endl;
		cout << "11) Encerrar o programa " << endl;
		int x;
		cin >> x;
		cin.ignore();
		switch(x){
			case 1:{
				system("cls");
				int tipo;
				string material;
				Item b;
				cout << "Nome: ";
				getline(cin,b.nome);
				cout << "Idade: ";
				cin >> b.idade;
				cin.ignore();
				Lista_Insere(&ar,b);
				cout << "O aluno possui algum material, tal como alimentos e/ou cobertores? (s/n)" << endl; 
				char v; 
				cin >> v; 
				cin.ignore();
				if (v=='s'){
					cout << "Quantos? " << endl; 
					int w; 
					cin >> w; 
					cin.ignore();
					for (int i = 0; i < w; i++){
						Item6 g;
						cout << "Digite o nome do item " << i + 1 << " ";
						getline(cin,g.nome); 
						cout << "Classifique o item " << i + 1 << " de acordo com a legenda. 1)Alimento 2)Cama 3)Utensilio" << endl; 
						cin >> g.tipo;
						cin.ignore();
						Lista_Insere6(&it,g);
				    }
				}
				if (v=='n')
					cout << "ok!" << endl; 
				break;
		}
			case 2: {
				system("cls");
				Item2 c;
				cout << "Nome: ";
				getline(cin,c.nome);
				cout << "Idade: ";
				cin >> c.idade;
				cin.ignore();
				Lista_Insere2(&pr,c);
				break; 
			}
			case 3:{
				system("cls");
				cout << "1)Registrar palestras" << endl << "2)Registrar reunioes" << endl << "3)Registrar manifestacoes" << endl; 
				int y; 
				cin >> y;
				cin.ignore();
				switch (y){
					case 1: {
						system("cls");							
						Item3 d;
						cout << "Titulo da palestra: " ;
						getline(cin,d.titulo);
						cout << "Descricao da palestra: ";
						getline(cin,d.descricao);
						cout << "Local da palestra: "; 
						getline(cin,d.local); 
						cout << "Dia:(numero) "; 
						cin >> d.dia;
						cin.ignore();						
						cout << endl << "Mes:(numero) "; 
						cin >> d.mes; 
						cin.ignore();
						Lista_Insere3(&pa,d);
						break; 
				}
					case 2: {
						system("cls");
						Item4 e; 
						cout << "Titulo da reuniao: " ;
						getline(cin,e.titulo);
						cout << "Descricao da reuniao: " ;
						getline(cin,e.descricao);
						cout << "Dia da reuniao: (numeros) "; 
						cin >> e.dia; 
						cin.ignore();
						cout << "Mes da reuniao: (numeros) "; 
						cin >> e.mes; 
						cin.ignore();
						Lista_Insere4(&ra,e);
						break;
					}					
					case 3: { 
					system("cls");
						Item5 f; 
						cout << "Titulo da manifestacao: " ;
						getline(cin,f.titulo);
						cout << "Descricao da manifestacao: " ;
						getline(cin,f.descricao);
						cout << "Dia da manifestacao: (numeros) "; 
						cin >> f.dia;
						cin.ignore();
						cout << "Mes da manifestacao: (numeros) "; 
						cin >> f.mes;
						cin.ignore();
						Lista_Insere5(&mn,f);
						break; 
					break;
					}
				}
				break;
				}
			
			case 4:{ 
				system("cls");
				cout << "1)Checar lista de palestras" << endl << "2)Checar lista de reunioes" << endl << "3)Checar lista de manifestacoes" << endl; 
				int z; 
				cin >> z;
				cin.ignore();
				switch (z){
					case 1: 
						TLista_Imprime3(&pa);
						break;
					case 2: 
						TLista_Imprime4(&ra);
						break;
					case 3: 
						TLista_Imprime5(&mn);
						break;
				}
			break;
			}
			case 5: {
				TLista_Imprime(&ar);
				break;
			}
			case 6: 
				TLista_Imprime2(&pr);
				break; 
			case 7:  
				TLista_Imprime6(&it);
				break;
			case 8:   
				cout << "Insira o nome do aluno que gostaria de remover: " ; 
				getline(cin,nomeremocao); 
				Lista_RemoveAluno (&ar,nomeremocao); 
				break;
			case 9: 
				cout << "Insira o nome do professor que gostaria de remover: " ; 
				getline(cin,nomeremocao); 
				Lista_RemoveProfessor (&pr,nomeremocao); 
				break;
			case 10: {
				cout << "Qual tipo de evento gostaria de cancelar? " << endl << "1)Palestra " << endl << "2)Reuniao" << endl << "3)Manifestacao" << endl; 
				int removeeventos; 
				cin >> removeeventos; 
				cin.ignore();
				switch (removeeventos){
					case 1: {
						cout << "Digite o TITULO da palestra que quer remover " << endl;
						getline(cin,nomeremocao);
						Lista_RemovePalestra(&pa,nomeremocao);
						break;
					}
					case 2:  
						cout << "Digite o TITULO da reuniao que quer remover " << endl;
						getline(cin,nomeremocao);
						Lista_RemoveReuniao(&ra,nomeremocao);
						break;
					case 3: 
						cout << "Digite o TITULO da manifestacao que quer remover " << endl;
						getline(cin,nomeremocao);
						Lista_RemoveManifestacao(&mn,nomeremocao);
						break;
				}
			break;
			}
			case 11: {
				cout << "Digite o nome do item que quer remover: "; 
				getline(cin,nomeremocao);
				Lista_RemoveItem(&it,nomeremocao);
				break;
			}
		}
	} 	while (var==true);
		
	
	return 0;
	
}