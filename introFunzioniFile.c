#include <stdio.h>

void main(){
    
    FILE *f = NULL;
    char filename[] = {"testo.txt"};
    char parola[20];
    int arrayInt[10];
    char arrayStringhe[10][20];
    int i=0;
    
    f = fopen(filename,"r");
    if (f==NULL){
        printf("File non trovato\n");
        return;
    }
    fscanf(f,"%s",parola);
    fscanf(f,"%s",parola);
    while(!feof(f)){
        fscanf(f,"%d",&arrayInt[i]);
        fscanf(f,"%s",arrayStringhe[i]);
        i++;
    }
    
    fclose(f);
    
    
    
    
}
