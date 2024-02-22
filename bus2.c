#include <stdio.h>
#include <stdlib.h>

struct bus {
    int id;
    int seats;
    int line;
    char driver[50];
};

struct bus ajout_bus();

int main() {
    int choix_principal;
    int choix_sous_menu;

    do {
        printf("\nMENU PRINCIPAL\n");
        printf("1 = Gérer bus\n");
        printf("2 = Gérer ligne\n");
        printf("3 = Statistiques\n");
        printf("0 = Quitter\n");
        printf("Entrez votre choix: ");
        scanf("%d", &choix_principal);

        switch (choix_principal) {
            case 1:
                do {
                    printf("\nMENU Gérer bus\n");
                    printf("1 - Ajouter bus\n");
                    printf("2 - Afficher\n");
                    printf("3 - Consulter\n");
                    printf("4 - Supprimer\n");
                    printf("5 - Afficher Chauffeurs\n");
                    printf("6 - Trier par marque\n");
                    printf("7 - Trier par nombre de places\n");
                    printf("0 - Quitter\n");
                    printf("Entrez votre choix: ");
                    scanf("%d", &choix_sous_menu);

                    // Ajouter des appels de fonctions ou du code pour chaque option
                } while (choix_sous_menu != 0);
                break;
            case 2:
                do {
                    printf("\nMENU Gérer ligne\n");
                    printf("1 - Ajouter\n");
                    printf("2 - Afficher tous\n");
                    printf("3 - Consulter\n");
                    printf("4 - Supprimer\n");
                    printf("5 - Afficher bus d'une ligne\n");
                    printf("6 - Trier par nombres de stations\n");
                    printf("0 - Quitter\n");
                    printf("Entrez votre choix: ");
                    scanf("%d", &choix_sous_menu);
                    // Ajouter des appels de fonctions ou du code pour chaque option
                } while (choix_sous_menu != 0);
                break;
            case 3:
                do {
                    printf("\nMENU Statistiques\n");
                    printf("1 - Min bus par ligne\n");
                    printf("2 - Max bus par ligne\n");
                    printf("3 - Moyenne bus par ligne\n");
                    printf("0 - Quitter\n");
                    printf("Entrez votre choix: ");
                    scanf("%d", &choix_sous_menu);

                    if (choix_sous_menu == 1) {
                        struct bus* prop = ajout_bus();
                    }
                } while (choix_sous_menu != 0);
                break;
            case 0:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide. Veuillez entrer un choix valide.\n");
        }
    } while (choix_principal != 0);

    return 0;
}

struct bus ajout_bus() {
    int nb = 0;
    int i;

    printf("Combien souhaitez-vous ajouter de bus ?\n");
    scanf("%d", &nb);

    struct bus *prop = malloc(nb * sizeof(struct bus));

    for (i = 0; i < nb; i++) {
        printf("\nEntrer l'ID du bus %d : ", i);
        scanf ("%d", &prop[i].id);

        printf("\nEntrer la ligne du bus %d : ", i);
        scanf ("%d", &prop[i].line);

        printf("\nEntrer le nombre de places disponibles du bus %d : ", i);
        scanf ("%d", &prop[i].seats);

        printf("\nEnter le nom du chauffeur de bus %d : ", i);
        scanf ("%s", prop[i].driver);
    }

    for (i = 0; i < nb; i++) {
        printf("### RECAPITULATIF ### \nID : %d \nLigne : %d \nPlaces : %d \nConducteur : %s", prop[i].id, prop[i].line, prop[i].seats, prop[i].driver);
    }

    struct bus* prop = (bus*)calloc(3, sizeof(struct bus));
    free(prop);
    return prop
}
