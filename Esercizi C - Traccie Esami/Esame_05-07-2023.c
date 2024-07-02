/*Fondamenti di Informatica (LT Ing. Elettronica)
            Appello del 5 Luglio 2023

All'interno di un ristorante, il personale di sala acquisisce le ordinazioni di ogni tavolo tramite dispositivi mobili,
Sulla base di tale scenario, scrivere un programma (Con il proprio nome, cognome e matricola in testa al file, sotto forma di commento) che consente
di acquisire n sequenze rappresentanti le ordinazioni dei tavoli. Ciascuna ordinazione � composta da:

- Un valore intero positivo "id" indicante l'identificativo del cameriere che sta prendendo l'ordinazione
- Un valore intero "nc" indicante il numero di consumazioni da servire in quell'ordinazione
- Seguono "nc" valori reali che rappresentano l'importo delle singole consumazioni.

Ad esempio: La sequenza "5,3,10.5,22,7.6" � associata ad un'ordinazione presa dal cameriere con identificativo #5 per un tavolo con 3 consumazioni e che la prima consumazione ha un importo di 10.5 euro,
la seconda consumazione ha un importo 22 euro e la terza consumazione di 7.6 euro.

Con i dati delle n sequenze:

1. Costruire una matrice tip (In inglese, mancia) nella quale ogni riga contiene, per le sole ordinazioni di almeno tre consumazioni ed importo totale maggiore di 50 euro,
l'id del cameriere, mancia dovuta al cameriere (il 5% dell'importo totale delle consumazioni) e il valore della consumazione con importo minore tra quelle dell'ordinazione.

2. Calcolare e stampare il totale dell'incasso del ristorante (cio� la somma degli importi di tutte le consumazioni di tutte le ordinazioni).

3. Per ogni cameriere presente in tip, calcolare e stampare il totale delle mance che ha ricevuto.

N.B: si tratta di un ristorante di lusso, quindi non si possono fare assunzioni sull'importo massimo della singola consumazione (In altre parole, il minimo va inizializzato opportunamente)

N.B: Per il punto 3, sviluppare una funzione "tot_tip" opportunamente definita che implementa quanto specificato.

Esempio se n=6, e le 6 sequenze sono:

1 3 44   16  30
2 2 50.5 10
3 4 5    5.5 10 7
1 1 100
2 4 10   10  10 20
1 4 150  5   15 30

il programma costruisce una matrice tip al punto 1 ----->

---> il programma, al punto 2, stampa "totale incasso ristorante= 538 euro"
(cio� 44+16+40+50.5+10+5+5.5+10+7+100+10+10+10+20+150+5+15+30=538)

E al punto 3 stampa "cameriere id 1 ha incassato complessivamente 15 euro di mancia" e
"cameriere id 2 ha incassato complessivamente 2.5 euro di mancia"*/


#include <stdio.h>
#define DIM 100
/*In questo caso, qui si crea la funzione void, con il quale la stessa secondo il compito...viene chiamata tot_tip, la stessa
al suo interno inizializzaziamo tip che sarebbe la matrice di dimensione DIM, che contiene 3 dati, e alla fine si iniziallizza
n e k che ci serviranno poi per completare il resto dello svolgimento della funzione.*/
void tot_tip(int tip[DIM][3], int n){
    int k;
    float totaleMancia = 0; /*Si iniziallizza float che sar� il totale della mancia che alla partenza si iniziallizza sempre a 0*/
/*Si iniziallizza un 'for' che servir� per calcolare ogni volta il conto con annesso anche un if, il quale servir� affinch� si faccia sempre il calcolo della mancia sulla base delle opzioni inserite*/
    for(k=0; k<n; k++){
        if(tip[k][0] == tip[k+1][0]){
            totaleMancia += tip[k][0];
            totaleMancia += tip[k+1][0];
        }
    }

}

/*Da qui comincia il main...dove al suo interno, completiamo l'opera di costruzione del compito*/
int main () {
    int i,j,n,nc,id;
    float tip[DIM][3], importoLetti, importoLettoMinore=0;
    float sommaImporto = 0, mancia = 0, sommaImportoTotale = 0;

    printf("Quante sequenze vuoi leggere? ");
    scanf("%d",&n);

    for(i=0; i<n; i++){ //'i' in questo caso è un contatore, contatore che consente sotto di ripetere ogni volta ciò che è contenuto nel for
        printf("\nInserire il codice del cameriere: ");
        scanf("%d",&id);
        printf("\nInserire il numero di ordinazioni: ");
        scanf("%d",&nc);
        for(j=0; j<nc; j++){ //'j' è un contatore, consente di inserire la consumazione incrementata di uno, di un tavolo che dice il sistema, e poi di inserirla in 'importoletti'
            printf("Inserire la %d consumazione: ",j+1);
            scanf("%f",&importoLetti);
            printf("\n");

            if(importoLettoMinore == 0 || importoLetti<importoLettoMinore){ // per il terzo valore della matrice serve il minore.
                importoLettoMinore = importoLetti;
            }

            sommaImporto += importoLetti;
            //punto 3
            sommaImportoTotale += importoLetti;
        }

        mancia = (5/100) * sommaImporto;

        if(nc>=3 || sommaImporto>50){
            tip[i][0] = id;
            tip[i][1] = mancia;
            tip[i][2] = importoLettoMinore;
        }

        //azzero le variabili
        sommaImporto = 0;
        mancia = 0;
        importoLettoMinore = 0;
    }

    // secondo punto
    printf("Il totale degli importi della serata e' %f\n",sommaImportoTotale);

    // terzo punto
    tot_tip(tip, n);
}
