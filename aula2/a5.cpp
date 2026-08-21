#include <iostream>
using namespace std;
int main() {
    int lista[10]={10,20,30,40,50};
    int tamanho = 5;
    for (int i = 0; i < tamanho; i++) {
        cout << "Elemento " << i << ": " << lista[i] << endl;
    }