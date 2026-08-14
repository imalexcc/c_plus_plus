#include <iostream>
using namespace std;
int main() {
    float media;
    cout << "Digite a média: ";
    cin >> media;
    if (media >= 7.0) {
        cout << "Aprovado" << endl;
    } else {
        if (media >= 4.0) {
            cout << "Recuperação" << endl;
        } else {
            cout << "Reprovado" << endl;
        }
    }
    return 0;
}