#include <iostream>
#include "lib.h"
using namespace std;

int main(){
	char elenco[10][20];
	for(int i=0; i<10; i++)
		cin >> elenco[i];
	
	char nome[20];
	cin >> nome;
	
	int posizione = cercaNome(elenco, nome);
	if(posizione == -1)
		cout << "non presente";
	else
		cout << posizione;
	
	return 0;
}
