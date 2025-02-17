#include "Aleatorio.h"
#include "Crescente.h"
#include "Decrescente.h"
#include "base.h"

void HUB() {
	cout << "       PROJETO DE ALGORITMOS       " << endl;
	cout << "Escolha uma opcao:" << endl << endl;
	cout << "1 - Insertion Sort" << endl;
	cout << "2 - Selection Sort" << endl;
	cout << "3 - Shell Sort" << endl;
	cout << "4 - Bubble Sort" << endl;
    cout << "5 - Merge Sort" << endl;
	cout << "6 - Sair" << endl;
}

void MENU() {
	cout << "Escolha o tamanho da instancia:" << endl;
	cout << "1 - 10 numeros" << endl;
	cout << "2 - 100 numeros" << endl;
	cout << "3 - 1.000 numeros" << endl;
	cout << "4 - 10.000 numeros" << endl;
	cout << "5 - 100.000 numeros" << endl;
	cout << "6 - 1.000.000 numeros" << endl;
}

void MENU_CDA() {
	cout << "Escolha uma das seguintes entradas:" << endl;
	cout << "1 - Crescente" << endl;
	cout << "2 - Decrescente" << endl;
	cout << "3 - Aleatorio" << endl;
}
int main() {
	
	int menu=0, tam, inst;
	FILE* entrada = NULL, *saida = NULL;

	while (menu != 6) {
		HUB();
		cin >> menu;

		switch (menu) {
		case 1:
			//INSERTION SORT
			MENU();
			cin >> tam;
			MENU_CDA();
			cin >> inst;

			switch (inst) {
			case 1:
				//CRESCENTE
				CRESCENTE(menu, tam, entrada, saida);
				cout << "CRESCENTE" << endl << endl;
				break;

			case 2:
				//DECRESCENTE
				DECRESCENTE(menu, tam, entrada, saida);
				cout << "DECRESCENTE" << endl << endl;
				break;

			case 3:
				//ALEATORIO
				ALEATORIO(menu, tam, entrada, saida);
				cout << "ALEATORIO" << endl << endl;
				break;
			}
			break;

		case 2:
			//SELECTION SORT
			MENU();
			cin >> tam;
			MENU_CDA();
			cin >> inst;

			switch (inst) {
			case 1:
				//CRESCENTE
				CRESCENTE(menu, tam, entrada, saida);
				cout << "CRESCENTE" << endl << endl;
				break;

			case 2:
				//DECRESCENTE
				DECRESCENTE(menu, tam, entrada, saida);
				cout << "DECRESCENTE" << endl << endl;
				break;

			case 3:
				//ALEATORIO
				ALEATORIO(menu, tam, entrada, saida);
				cout << "ALEATORIO" << endl << endl;
				break;
			}
			break;
		
		case 3:
			//SHELL SORT
			MENU();
			cin >> tam;
			MENU_CDA();
			cin >> inst;

			switch (inst) {
			case 1:
				//CRESCENTE
				CRESCENTE(menu, tam, entrada, saida);
				cout << "CRESCENTE" << endl << endl;
				break;

			case 2:
				//DECRESCENTE
				DECRESCENTE(menu, tam, entrada, saida);
				cout << "DECRESCENTE" << endl << endl;
				break;

			case 3:
				//ALEATORIO
				ALEATORIO(menu, tam, entrada, saida);
				cout << "ALEATORIO" << endl << endl;
				break;
			}
			break;

		case 4:	
			//BUBBLE SORT
			MENU();
			cin >> tam;
			MENU_CDA();
			cin >> inst;

			switch (inst) {
			case 1:
				//CRESCENTE
				CRESCENTE(menu, tam, entrada, saida);
				cout << "CRESCENTE" << endl << endl;
				break;

			case 2:
				//DECRESCENTE
				DECRESCENTE(menu, tam, entrada, saida);
				cout << "DECRESCENTE" << endl << endl;
				break;

			case 3:
				//ALEATORIO
				ALEATORIO(menu, tam, entrada, saida);
				cout << "ALEATORIO" << endl << endl;
				break;
			}
			break;

		case 5:
            //MERGE SORT
			MENU();
			cin >> tam;
			MENU_CDA();
			cin >> inst;

			switch (inst) {
			case 1:
				//CRESCENTE
				CRESCENTE(menu, tam, entrada, saida);
				cout << "CRESCENTE" << endl << endl;
				break;

			case 2:
				//DECRESCENTE
				DECRESCENTE(menu, tam, entrada, saida);
				cout << "DECRESCENTE" << endl << endl;
				break;

			case 3:
				//ALEATORIO
				ALEATORIO(menu, tam, entrada, saida);
				cout << "ALEATORIO" << endl << endl;
				break;
		    }
			break;
            
		case 6:
			break;

        default:
			cout << "OPCAO INVALIDA, DIGITE NOVAMENTE!" << endl << endl;
			break;
	
        } 
	
    }
    return 0;
}
