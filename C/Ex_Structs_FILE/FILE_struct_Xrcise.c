#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
 	char nome[20];
 	char cognome[20];
 	int punteggio;
} studente;

int main() {
	FILE *in = freopen("input.txt", "r", stdin);

	int i, n, max = 0;
	fscanf(in, "%d", &n);
	
	studente lista[n];

	for(i=0; i<n; i++) {
		fscanf(in, "%s", lista[i].nome);
		fscanf(in, "%s", lista[i].cognome);
		fscanf(in, "%d", &lista[i].punteggio);

		if(lista[i].punteggio > lista[max].punteggio) {
			max = i;
		}
	}

	fclose(in);

	printf("%s %s con %d punti\n", lista[max].nome, lista[max].cognome, lista[max].punteggio);

	return 0;
}