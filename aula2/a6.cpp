#include <iostream>
using namespace std;
int main() {
    int lista[10]={10,20,30,40,50};
    int tamanho = 5;
    int valor;
    cout << "Valor para buscar: ";
    cin >> valor;
    bool encontrado = false;
    for (int i = 0; i < tamanho; i++) {
        if (lista[i] == valor) {
            cout << "Valor encontrado na posição: " << i << endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        cout << "Valor não encontrado." << endl;
    }
    return 0;
}