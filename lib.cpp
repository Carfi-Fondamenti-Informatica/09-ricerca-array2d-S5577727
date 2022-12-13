#include "lib.h"

int controllo_nome(char arraylista[], char arraynome[]){
    int riga;
    for (riga=0; riga<10; riga++){
        if (arraylista[riga] == arraynome[riga]){
            return riga;
        }
        else riga=11;
    }
    return riga;
}
