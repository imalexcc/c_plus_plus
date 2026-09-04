#include <iostream>
using namespace std;
const int TAM = 5;
int pilha[TAM];
int topo = -1;
void empilhar(int valor){
    if (topo == TAM - 1){
        cout << "Pilha cheia!" << endl;
        return;
    }
    topo++;
    pilha[topo] = valor;
    cout << valor << " Empilhando: " << endl;
}
void desempilhar(){
    if (topo == -1){
        cout << "Pilha vazia!" << endl;
        return;
    }
    cout << pilha[topo] << " Desempilhando: " << endl;
    topo--;
}
void exibir(){
    if (topo == -1){
        cout << "Pilha vazia!" << endl;
        return;
    }
    cout << "Pilha: " << endl;
    for (int i = topo; i >= 0; i--){
        cout << pilha[i] << endl;
    }
}
int main(){
    empilhar(10);
    empilhar(20);
    empilhar(30);
    exibir();
    desempilhar();
    cout << "\nApós desempilhar: " << endl;
    exibir();
}