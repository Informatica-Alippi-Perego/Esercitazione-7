#include <stdio.h>
#include <stdlib.h>

void stampa(char *stringa[], int i);
void stampaParaola(char stringa[]); //void stampaParola(char *stringa);
int inserisci(char *stringa[20]);

int main(){
    char *stringa[20];
    int num;
    
    num = inserisci(stringa);
    stampa(stringa, num);
    return 0;
}

void stampa(char *stringa[20], int i){
    int k;
    for (k = 0; k<i; k++)
        stampaParaola(stringa[k]);
}

void stampa2(char *stringa[20], int i){
    for (; i>=0; i--)
        stampaParaola(stringa[i]);
}

void stampaParaola(char stringa[]){
    char *i;
    int len = 0;
    for (i=stringa; *i!='\0'; i++)
        len++;
    for (i=stringa+len-1; i>=stringa; i--)
        printf("%c",*i);
    
    printf("\n");
    
        
}

int inserisci(char *stringa[20]){
    int n = 0;
    int sizeSingleString = sizeof(char)*20;
    char r;
    
    do{
        stringa[n] = (char *)malloc(sizeSingleString);
        printf("Inserisci la stringa: ");
        scanf(" %s",stringa[n]);
        n++;
        printf("Vuoi continuare(s/n): ");
        scanf(" %c",&r);
    }while(r =='s');
    return n;
}
