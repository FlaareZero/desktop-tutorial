/*Si vuole realizzare una applicazione che permetta di mostrare a schermo i numeri tipici di un conto alla rovescia partendo da un valore deciso dall'utente.
Tale valore deciso dall'utente deve essere maggiore di 0*/

#include<stdio.h>

int main(){
    /*Iniziallizazione Variabili*/
    int i;
    int n;
    n=1;

    /*Presa del parametro di conteggio*/
    printf("Inserisci il numero da cui deve partire il conteggio:");
    scanf("%d",&i);

    /*Ciclo di conteggio*/

    while (i > 0){
        printf("%d", n);

        n++;

        return 0;
    }



}
