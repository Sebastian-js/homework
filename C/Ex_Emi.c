#include <stdio.h>

int potenza(int n){
    return n*n;
}

int radice_quadrata(int n){
	int ris;
	for(int i = 1; i * i <= n; i++){
        ris = i;
	}
	return ris;
}

int sommatoria(int vett[], int n){
    int i, somma=0;
    for(i=0; i<n; i++){
        somma = somma + potenza(vett[i]-4);
    }
    somma = somma / n;
    somma = radice_quadrata(somma);
    return somma;    
}