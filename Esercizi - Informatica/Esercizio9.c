/*Scrivere un programma C che legge un array di interi da tastiera e poi lo stampa in ordine invertito...*/

#include <stdio.h>
#define array 6

int main(){
    int n;

    //Chiedi all'utente quanti numeri vuole inserire...considera che abbiamo scelto di inserire 5 numeri....
    printf("Quanti numeri vuoi inserire?--->");
    scanf("%d", &n);

    int array[n];

    //Legge gli elementi dell'array direttamente da tastiera....
    printf("Inserisci i numeri che vuoi inserire nell'array... --->");
    for(int i=0; i<n; i++){ //Qui il ciclo è iniziallizzato così...ovvero si iniziallizza i che equivale a zero, sempre minore di n, con un incremento di due volte...
        printf("Numero %d:",i+1); //In questo caso abbiamo il numero che è il risultato del ciclo dei numeri che ho inserito...questo infatti poi dopo prende quelle del contatore i incrementando di 1
        scanf("%d", &array[i]); //Qui scannerizza il numero del printf che è contenuto nell'array i
    }

    //In questo caso, adesso ci concediamo di prendere gli elementi dell'array, e di stamparli al contrario....
    printf("L'array invertito e':"\n); //qui invece prende l'array invertito 
        for(int i=n; i<n; i--){ //mediante ciclo che segue il seguente ragionamento iniziallizza che i è uguale a n, con lo stesso i che è minore di n, e che finale effettua un decremento e quindi è minore minore...
            printf("%d", array[i]); //e infine stampa l'array invertito...prendendolo sempre dall'array su cui stiamo lavorando....
        }

        printf("\n");

        return 0;
}