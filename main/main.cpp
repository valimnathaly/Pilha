#include<iostream>
#include<locale>

using namespace std;

const int MAX_ITENS = 5; //define tamanho da pilha
int topo = -1; //como pilha está vazia, o topo está fora dos valores do array
string pilha[MAX_ITENS]; //define pilha com o tamanho de MAX_ITENS

void push(string item){ //função para popular a pilha
    if(MAX_ITENS <= (topo+1)){ //verifica se o array já está cheio
        cout << "Pilha Cheia!!" << endl;
        system("pause");
    }
    else{
        pilha[++topo] = item; //incrementa o valor de topo e adiciona o item à pilha
    }
}

void pop(){ //função para esvaziar o último item da fila
    if(topo <= -1){ //verifica se pilha está vazia
        cout << "Pilha Vazia!!" << endl;
    }
    else{
        cout << "Esvaziou!" << endl;
        pilha[topo] = ""; //limpa a pilha
        --topo;
    }
    
    system("pause"); //pausa o sistema para vizualição da mensagem
}

void exibePilha(){
    cout << "Posição \tValor" << endl;
    
    for(int i=0; i<MAX_ITENS; i++){
        cout << i << "\t\t" << pilha[i] << endl;
    }
    
    cout << endl; //pula linha
}

int main(){
    setlocale(LC_ALL, ".UTF8");

    char menu;
    string item;
    
    do{
        exibePilha();
        cout << "MENU" << endl;
        cout << "1- Adicionar um item" << endl;
        cout << "2- Excluir um item" << endl;
        cout << "3- Sair" << endl;
        
        cin >> menu;
        cout << endl; // pular linha
        
        switch(menu){
            case '1':
                cout << "Insira o item a ser adicionado:" << endl;
                cin >> item;
                push(item);
            break;
            case '2':
                pop(); //não precisa fazer
            break;
            case '3':
                cout << "Fechando o sistema!";
            break;
            default:
                cout << "Valor inválido!!";
                system("pause");
        }
        system("cls");
    } 
    while(menu != '3');
    
    return 0;
}







