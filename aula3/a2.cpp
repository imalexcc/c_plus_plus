#include <iostream>
using namespace std;

int main()
{
    int lista[] = {64, 25, 12, 22, 11};
    int n = 5;
    for (int i = 0; i < n - 1; i++)
    {
        int menor = i;
        for (int j = i + 1; j < n; j++)
        {
            if (lista[j] < lista[menor])
            {
                menor = j;
            }
        }
        int temp = lista[i];
        lista[i] = lista[menor];
        lista[menor] = temp;
        cout << "Passo: ";
        for (int k = 0; k < n; k++)
        {
            cout << lista[k] << " ";
        }
        cout << endl;
    }
    return 0;
}