/*Scrivi una funzione che riceve una matrice bidimensionale mat di dimensioni n x m e stampa la somma di ogni riga e colonna.
Seguendo, usando la stessa procedura, scrivi una funziona che riceva quella matrice e ne ricavi massimo, minimo. 
Infine, scrivi una terza funzione che ricerchi un termine all'interno della matrice*/

#include<stdio.h>
#define MAT [n][100]

/***Svolgimento Punto 1***/

int stampa_somma_matrice(int MAT[n][100], int i, int n){
    
    int j, k;
    int somma_riga_matrice;
    int somma_colonna_matrice;

    /***Facciamo la somma delle righe***/

    for(i=0; i<n; i++){
        //Qui effettuiamo la somma sempre delle righe...
        somma_riga_matrice=0; //inizialliziamo sempre a zero...
        for(j=0; j<n; j++){
            somma_riga_matrice= +=MAT[j][k];
        }
        printf("Somma della riga %d: %d\n", i, somma_riga_matrice);
    }

    /***Facciamo la somma delle colonne***/

    for(i=0; i<n; i++){
        //Qui effettuiamo la somma sempre delle colonne...
        somma_colonna_matrice=0; //inizialliziamo sempre a zero...
        for(j=0; j<n; j++){
            somma_colonna_matrice= +=MAT[j][k];
        }
        printf("Somma della colonna %d: %d\n", i, somma_colonna_matrice);
    }
}

int main(){
    int MAT[n][100];

    int n;
    int m=100;

    stampa_somma_matrice(MAT, n, m);

    return 0;
}

/***Svolgimento Punto 2***/ /*Si richiede della stessa matrice di calcolare max e min*/

int massimo_minimo_matrice(int MAT[][], int n, int i int trovo_massimo_mat, int trovo_minimo_mat;){
    
    int j,k;

    trovo_massimo_mat = INT_MAX;
    trovo_minimo_mat = INT_MIN;

    /***Avvio il ciclo per trovare massimo e minimo***/

    for(i=0; i<n; i++){
        for(n=0; n<j; n++){
            if(MAT[n][100] < trovo_minimo_mat){
                trovo_minimo_mat = MAT[n][100]; 
            }
            if(MAT[n][100] > trovo_massimo_mat){
                trovo_massimo_mat = MAT[n][100];
            }
        }
    }
}

int main(){
    int MAT[n][100];
    
    int n;
    int m=100;

    massimo_minimo_matrice(trovo_massimo_mat, trovo_minimo_mat);
    printf("Minimo: %d", trovo_minimo_mat);
    printf("Massimo: %d", trovo_massimo_mat);
}

/***Svolgimento Punto 3***/ /*Si richiede di cercare un termine nella matrice attuale...*/

int cerca_term_matrice(int MAT[][], int n, int i, int termine_matrice){
    int j,k;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (MAT[i][j] == termine_matrice) {
                return true;
            }
        }
    } return false;
}

int main(){
    int MAT[n][100];
    
    int n;
    int m=100;

    if (cerca_term_matrice(MAT, n, m, termine_matrice)) {
        printf("Termine %d trovato nella matrice\n", termine_matrice);
    } else {
        printf("Termine %d non trovato nella matrice\n", termine_matrice);
    }

    return 0;
}