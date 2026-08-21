#include <iostream>
using namespace std;

int main(){
    int lista[10];
    int tamanho = 0;
    int valor;
    for (int i = 0; i < 5 ; i++) {
        cout <<"Digite um valor";
        cin >> valor;
        lista[tamanho] = valor;
        tamanho++;
    }
    return 0;
}