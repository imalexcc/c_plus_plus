#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> pilha;
    pilha.push(10);
    pilha.push(20);
    pilha.push(30);
    pilha.push(40);
    cout << "Elemento do topo: ";
    cout << pilha.top() << endl;
    cout << "Tamanho da pilha: ";
    cout << pilha.size() << endl;
    cout << "Exibindo elementos da pilha: " << endl;
    while(!pilha.empty()){
        cout << pilha.top() << endl;
        pilha.pop();
    }
    return 0;
}