#include "lib.h"

int cercaNome(char elenco[10][20], char nome[20]){
    for(int i=0; i<10; i++){
     for(int j=0; j<20; j++){
        while(elenco[i][j] != '\0' && nome[j] != '\0'){
            if(elenco[i][j] != nome[j])
                break;
            j++;
        }
        if(nome[j] == '\0')	// Fine stringa raggiunta
            return i;
     }
    }
    return -1;
}
