#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    char arraylista[10][20];
    char arraynome[20];
  
    for (int i=0; i<10; i++){
        cin >> arraylista[i];
    }
    cin >> arraynome;

    int riga = controllo_nome(arraylista, arraynome);
    if (riga==11){
        cout << "non presente";
    }
    else cout << riga;
    return 0;
}
