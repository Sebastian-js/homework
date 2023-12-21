#include <stdio.h>

int potenza(int n){
    return n*n;
}

int radice_quadrata(int n){
    
}

int sommatoria(int vett[], int n){
    int i, somma=0;
    for(i=0; i<n; i++){
        somma = somma + potenza(vett[i]-4);
    }
    somma = somma / n;
    // qua devi fare la radice quadrata di somma
    return somma;    
}