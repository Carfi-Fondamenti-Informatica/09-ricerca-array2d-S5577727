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

    if (controllo(arraylista, arraynome)==100){
        cout << "non presente";
    }
    else cout << controllo(arraylista, arraynome);
    return 0;
}
