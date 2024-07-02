// esame del 05/07/2023
#include <stdio.h>

#define DIM 100

float tot_tip(int mat[m][1]){
  float sommaMance;
  for(int contatore=0; contatore<m; contatore++) {
    sommaMance+=mat[contatore][1];
  } 

  return sommaMance;
}

int main () {
    int i,n,m,nc,id;
    float sommaTotaleMance = 0;
    float cons;
    float somma,sommatot,max,min=0;
    printf("Quante ordinazioni devo leggere?");
    scanf("%d",&n);

    float tip[DIM][DIM];

// ci servirà per il conteggio della matrice tip:
    
    int k=0;
    while(i<n){
      printf("Quale cameriere e' l'addetto alla ordinazione?\n");
      scanf("%d",&id);
      printf("Leggo la %d consumazione: ",i+1);
      scanf("%d",&nc);
      printf("Consumazione %d: ",i+1);
      scanf("%f",&cons);
      min = cons;
      somma += cons;
      sommatot += cons;

      if(cons<min){
        min = cons;
      }

// Primo punto dell'esercizio
      if(n>3 && cons > 50.00){
        mat[k][0]=id;
        mat[k][1]=(somma*100)/5; // questo è il contenitore delle mance
        mat[k][2]=min;
        k++;
        //devo tenere conto delle iterazioni che ho con la matrice per il punto 3
        m++;
      }
      somma = 0;
      max = 0;
      min = 0;
      i++;

    }
  printf("Il totale dell'incasso del ristorante & %f",sommatot);
  sommaTotaleMance += tot_tip(mat[m][1]);

}
