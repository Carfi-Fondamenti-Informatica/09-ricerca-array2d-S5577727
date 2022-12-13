#include <iostream>
#include "lib.h"
using namespace std;


int main()
{
    char lista[10][20];
    char nome[20];

    for (int i = 0; i < 10; i++){
        cin >> lista[i];
    }
    cin >> nome;

    int pos = controllo(lista, nome);
    if (pos != -1) {
        cout << pos;
    }
    else cout << "Non presente" << endl;

    return 0;
}
