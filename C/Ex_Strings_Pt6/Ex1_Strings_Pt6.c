#include <stdio.h>

void reset_array(int n, int* vett){
    for(int i=0; i<n; i++){
        vett[i]=0;
    }
}

int main() {

    int i, j, n=50, a=0, tot=0;
    char str[n];
    int nwords[n];
    float avg;

    scanf("%[^\n]s", str);
    reset_array(n, nwords);

    for(i=0; str[i] != '\0'; i++){
        if(str[i]!=' ') {
            nwords[a]++;
        }
//        printf("%d\n", nwords[a]);
        a++;
    }
    j=1;
    for(i=0; i<a; i++){
        tot+=nwords[i];
        if(nwords[i]==0)
            j++;
//        printf("%d %d\n", tot, j);
    }
    avg=(float)tot/(float)j;

    printf("%f", avg);
    return 0;
}