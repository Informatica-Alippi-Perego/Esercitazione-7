#include <stdio.h>
//Array di dimensione statica N, sommare tutti gli elementi usando solo i puntatori
//Rifarlo con lunghezza decisa dall'utente

#define N 100

void inserisci(int *, int n);
int somma(int *val, int n);

int main(int argc, const char * argv[]) {
    int val[N];
    int n;
    printf("Quanti valori vuoi inserire? ");
    scanf("%d",&n);
    inserisci(val, n);

    printf("La somma vale %d", somma(val,n));
    return 0;
}

void inserisci(int *array, int n){
    int *start = array;
    
    while(array<start+n){
        scanf("%d",array);
        array++;
    }
}

void inserisci2(int *val, int n){
    for(int i=0; i<n; i++){
        scanf("%d",val+i);
    }
}

void inserisci3(int *array, int n){
    for(int *start = array; array<start+n; array++){
        scanf("%d",array);
    }
}

int somma(int *array, int n){
    int *i;
    int somma = 0;
    
    for (i = array; i<array+n; i++)
        somma = somma + *i;

    return somma;
}

/* Uguaglianza tra array e puntatori
array[0] = 10;
*array = 10;

scanf("%d",array);
scanf("%d",&array[0]);

array[22]  =4;
*(array+22) = 4;

scanf("%d",&array[22]);
scanf("%d",array+22);
*/
