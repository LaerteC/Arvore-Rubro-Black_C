#include <stdio.h>
#include <stdlib.h>
#include "ArvoreRB.h"



int main()
{ 
    ArvRB *raiz = cria_ArvoreRB();

    int i, N = 14, val[14] = {11, 2, 1, 5, 4, 7, 8, 14, 15,26,48,17,20,15};

    for (i = 0; i < N; i++)
    {

        insere_ArvRB(raiz, val[i]);
    }

    emOrdem_ArvRB(raiz, 0);

    printf("\n\n==========================\n\n");
    puts("*****");
    remove_ArvRB(raiz, 4);
    emOrdem_ArvRB(raiz, 0);
    printf("\n\n==========================\n\n");
    puts("*****");
    remove_ArvRB(raiz, 1);
    emOrdem_ArvRB(raiz, 0);

    return 0;
}
