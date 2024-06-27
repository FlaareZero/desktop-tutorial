/*Scrivere un programma in C che gestisce un semplice menù per un ristorante. Il programma deve:

Stampare un menù con le seguenti voci:
Antipasti
Primi piatti
Secondi piatti
Contorni
Dolci
Bevande
Permettere all'utente di scegliere una voce dal menù inserendo un numero corrispondente a ciascuna voce.
In base alla scelta dell'utente, stampare un sotto-menù con delle opzioni specifiche. Ad esempio, se l'utente sceglie "Antipasti", il sotto-menù potrebbe includere:
Prosciutto e melone
Insalata caprese
Mozzarella di bufala
Permettere all'utente di scegliere un'opzione dal sotto-menù.
Stampare un messaggio di conferma con la scelta dell'utente.
Usare if annidati o concatenati per gestire le diverse scelte del menù e del sotto-menù.
Usare switch-case per gestire la scelta dell'utente nel menù principale.
Usare un ciclo do-while per far ripetere il processo di scelta fino a quando l'utente non decide di uscire.

Es. Menù principale:

int main() {
  int scelta;

  do {
    printf("\n\nMenù principale:\n");
    printf("1. Visualizza dati\n");
    printf("2. Inserisci dati\n");
    printf("3. Modifica dati\n");
    printf("4. Elimina dati\n");
    printf("0. Esci\n");

    printf("\nInserisci la tua scelta: ");
    scanf("%d", &scelta);

    switch (scelta) {
      case 1:
        // Visualizza dati
        printf("\nFunzionalità Visualizza dati non ancora implementata.\n");
        break;
      case 2:
        // Inserisci dati
        printf("\nFunzionalità Inserisci dati non ancora implementata.\n");
        break;
      case 3:
        // Modifica dati
        printf("\nFunzionalità Modifica dati non ancora implementata.\n");
        break;
      case 4:
        // Elimina dati
        printf("\nFunzionalità Elimina dati non ancora implementata.\n");
        break;
      case 0:
        printf("\nUscita dal programma.\n");
        break;
      default:
        printf("\nScelta non valida.\n");
    }
  } while (scelta != 0);

  return 0;
}
*/
