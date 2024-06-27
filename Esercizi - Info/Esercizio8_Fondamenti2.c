/*Scrivere un programma in C che gestisce un semplice menù per un ristorante. Il programma deve:

Stampare un menù con le seguenti voci:
- Antipasti
- Primi piatti
- Secondi piatti
- Contorni
- Dolci
. Bevande
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
*/

#include <stdio.h>

int main() {
    int sceltaPrincipale;
    int sceltaSottoMenu;
    int Num_SottoMenu;
    int continua;

    do {
        // Stampa il menù principale
        printf("Menù del Ristorante:\n");
        printf("1. Antipasti\n");
        printf("2. Primi piatti\n");
        printf("3. Secondi piatti\n");
        printf("4. Contorni\n");
        printf("5. Dolci\n");
        printf("6. Bevande\n");
        printf("7. Esci\n");
        printf("Scegli un'opzione (1-7): ");
        scanf("%d", &sceltaPrincipale);

        switch(sceltaPrincipale){
            case 1: //Antipasti
                printf("Scegli un antipasto:\n");
                //-----------------------------------
                printf("1. Prosciutto e melone\n");
                printf("2. Insalata caprese\n");
                printf("3. Mozzarella di bufala\n");
                printf("Scegli un'opzione (1-3): ");
                scanf("%d", &sceltaSottoMenu);

                if(sceltaSottoMenu == 1){
                    printf("Hai scelto Prosciutto e melone.\n");
                } else if (sceltaSottoMenu == 2){
                    printf("Hai scelto Insalata Caprese.\n");
                } else if (sceltaSottoMenu == 3){
                    printf("Hai scelto Mozzarella di Bufala.\n");
                } else {
                    printf("Scelta non valida, riprovare...\n");
                }
                break;

            case 2: //Primi Piatti
                printf("Scegli tra i primi piatti:\n");
                //------------------------------------
                printf("1. Lasagne\n");
                printf("2. Spaghetti alla Carbonara\n");
                printf("3. Gricia\n");
                printf("4. Amatriciana\n");
                printf("5. Spaghetti Cacio e Pepe\n");
                //---------------------------------------
                printf("Scegli un'opzione (1-5): ");
                scanf("%d", &sceltaSottoMenu);

            case 3: //Secondi Piatti
                printf("Scegli tra i secondi piatti:\n");
                //------------------------------------
                printf("1. Parmigiana di Melanzane\n");
                printf("2. Polpette al sugo\n");
                printf("3. Polpettine di Tonno e Ricotta\n");
                printf("4. Pollo al Curry\n");
                printf("5. Saltimbocca alla Romana\n");
                printf("5. Zucchine Gratinate\n");
                printf("5. Polpette di Spinaci e Ricotta\n");
                //---------------------------------------
                printf("Scegli un'opzione (1-5): ");
                scanf("%d", &sceltaSottoMenu);

            case 4: //Contorni
                printf("Scegli tra i Contorni:\n");
                //------------------------------------
                printf("1. Cavolfiori Gratinati\n");
                printf("2. Insalata di Cavolfiore\n");
                printf("3. Peperonata\n");
                printf("4. Insalata di Patate\n");
                printf("5. Caponata\n");
                printf("5. Gateau di Patate\n");
                printf("5. Patate al forno\n");
                //---------------------------------------
                printf("Scegli un'opzione (1-5): ");
                scanf("%d", &sceltaSottoMenu);

            case 5: //Dolci
                printf("Scegli tra i dolci:\n");
                //------------------------------------
                printf("1. Tiramisu\n");
                printf("2. Torta Sacher\n");
                printf("3. Torta di Mele\n");
                printf("4. Crema Pasticceria\n");
                printf("5. Cheesecake al limone\n");
                printf("5. Brownies\n");
                printf("5. Cookies\n");
                //---------------------------------------
                printf("Scegli un'opzione (1-5): ");
                scanf("%d", &sceltaSottoMenu);

            case 6: //Bevande
                printf("Scegli tra le bevande:\n");
                //------------------------------------
                printf("1. Coca-Cola \n");
                printf("2. Coca-Cola ZERO\n");
                printf("3. Acqua Naturale\n");
                printf("4. Acqua Frizzante\n");
                //---------------------------------------
                printf("Scegli un'opzione (1-4): ");
                scanf("%d", &sceltaSottoMenu);
        }   
    }
}
