/*Creare un applicazione che mostri la tabellina di un numero scelto dall'utente, dallo 0 fino al 10*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int numero_tabellina;

    int i,n;

    printf("Inserisci il numero di cui devo riportare la tabellina: ");
    scanf("%d",&numero_tabellina);

    if(i<10){
        printf("La tabellina richiesta nn è disponibile...sorry!!!!");

        return 0;
    }

    while (n<10){
        printf("Ti mostrerò la tabellina del numero che mi hai fornito...");

        printf("%d",numero_tabellina*i);

        break;
    }
}
