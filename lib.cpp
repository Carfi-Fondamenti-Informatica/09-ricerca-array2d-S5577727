#include "lib.h"

int controllo(char lista[][20], const char nome[20]){
    for (int i=0; i<10; i++){
        if (lista[i] == nome){
            return i;
        }
    }
    return -1;
}
