#include <iostream>
using namespace std;
int main() {
    int idade = 20;
    cout << (idade >=18 && idade <=60) << endl;
    cout << (idade <18 || idade >60) << endl;
    cout << !(idade >=18) << endl;
    return 0;
}