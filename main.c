//
// Created by david on 07/02/2025.
//
#include <stdio.h>
#include <stdlib.h>



void allouerTableauEntiersV2(int** pTab, int const taille) {

    *pTab = calloc(taille,sizeof(int));
}


int main() {
    int* p = NULL;
    int taille =4;

     allouerTableauEntiersV2(&p,taille);

    for(int i = 0 ; i< taille ;i++) {
        printf("%d",p[i]);
    }


    free(p);
    p = NULL;
    return 0;






}








