#include <iostream>
#include "dequeue.h"

using namespace std;

int main()
{
    cout << "Fila dupla alocacao sequencial!" << endl;
    int tam, valor, opc;

    cout << "Digite o tamanho da fila: ";
    cin >> tam;

    Fila<int> t(tam);

    do{
        cout << "1-inserir atras" << endl;
        cout << "2-remover frente" << endl;
        cout << "3-inserir frente" << endl;
        cout << "4-remover atras" << endl;
        cout << "5-mostrar fila" << endl;
        cout << "9-sair" << endl;
        cout << "Selecione: ";
        cin >> opc;
        switch(opc){
        case 1:
            if(!t.filaCheia()){
                cout << "Digite o valor: ";
                cin >> valor;
                t.insereAtras(valor);
            }
 	    else
		cout << "Fila cheia! \n"; 
            break;
        case 2:
            if(!t.filaVazia())
                t.removeFrente();
	    else
		cout << "Fila vazia!" << endl;	
            break;
        case 3:
            if(!t.filaCheia()){
                cout << "Digite o valor: ";
                cin >> valor;
                t.insereFrente(valor);
			}
	    else
		cout << "Fila cheia! \n"; 
            break;
        case 4:
            if(!t.filaVazia())
                t.removeAtras();
	    else
		cout << "Fila vazia!" << endl;	
            break;
	case 5: 
	    if(!t.filaVazia()){
		for(int i = -1; tam>i; ++i){
		    if(t.getValor(i) != 0){
			cout << t.getValor(i) << " ";
		    }
		cout << "\n";
		}
	    }
	    else
		cout << "Fila vazia!" << endl;	
            break;
        case 9:
            cout << "fim..." << endl;
            break;
        default:
            cout << "opcao invalida..." << endl;
            break;
	}		
    }while(opc != 9);
    
    return 0;
}
