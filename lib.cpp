//
// Created by nvand on 10/12/2022.
//

#include "lib.h"

int controllo(char arraylista[10][20],char arraynome[]){
    int riga;
    bool controllo;

    for (riga=0; riga<10; riga++){

        for (int colonna=0; colonna<20;colonna++){

            if (arraylista[riga][colonna] == arraynome[colonna]){
                controllo=true;
            }
            else {
                controllo=false;
                colonna=20;
            }
        }
        if (controllo){
            return riga;
        }
    }
    if (!controllo){
        riga=100;
        return riga;
    }
}
