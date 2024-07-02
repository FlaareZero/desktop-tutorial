#include <stdio.h>
#define DIM 100

//punto 3
float benevoli(double punteggioMax){
    int numeroGiudici;
    if(punteggioMax=10){
        numeroGiudici++;
    }

return numeroGiudici;

}

int main () {
    float sommaPunteggi=0, punteggio, punteggioMax, punteggioMin;
    int atleta;
    int qualificati[DIM];
    float risultati[DIM][DIM];
    
    for(int i=0; i<6; i++){ //'i' è un contatore, e' serve per scannerizzare sempre l'atleta..visto che ne abbiamo 5 
        scanf("%d",&atleta);
        for(int j=0; j<=5; i++){ //'j' è un altro contatore è in caso sia minore oppure uguale a 5 bisogna inserire la valutazione..
            printf("Inserisci la valutazione n%d",j+1); //in questo caso si inserisce la valutazione dell'atleta che il sistema richiede, incrementandola di 1
            scanf("%f",&punteggio); //e successivamente si scannerizza, ci ricordiamo che mettiamo f poichè trattasi di un float
            // inizializzazione dei punteggi più alti/bassi
            punteggioMax=punteggio;
            punteggioMin=punteggio;

            if(punteggio<punteggioMin){
                punteggioMin=punteggio;
            }
            if(punteggio>punteggioMax){
                punteggioMax=punteggio;
            }

            if(punteggio!=punteggioMax || punteggio!=punteggioMin){
                sommaPunteggi+=punteggio;
            }

            //punto 3
            benevoli(punteggioMax);
            
        }
        // Costruzione della Matrice
        risultati[i][0]=atleta;
        risultati[i][1]=sommaPunteggi;
        risultati[i][2]=punteggioMax;
        risultati[i][3]=punteggioMin;

        //secondo punto
        if((sommaPunteggi/6)>8.0){
            qualificati[i]=atleta;
        }

        //terzo punto
        if(numeroGiudici>=3){
            printf("Per l'atleta %d i giudici hanno attribuito almeno %d volte il punteggio di 10",atleta,numeroGiudici);
        }
    }
}