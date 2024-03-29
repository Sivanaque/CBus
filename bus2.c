#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct bus {
    int id;
    int seats;
    int line;
    char driver[50];
    char marque[30];
};

struct line {
    int num;
    int minb;
    int maxb;
    int nbstations;
};

struct bus ajout_bus();
struct line ajout_line();

int main() {
    int choix_principal;
    int choix_sous_menu;
    int nombre_bus = 0;


    do {
        struct bus prop;
        struct line line;
        printf("\nMENU PRINCIPAL\n");
        printf("1 - Gérer bus\n");
        printf("2 - Gérer ligne\n");
        printf("3 - Statistiques\n");
        printf("0 - Quitter\n");
        printf("Entrez votre choix: ");
        scanf("%d", &choix_principal);

        switch (choix_principal) {
            case 1:
                do {
                    printf("\nMENU Gérer bus\n");
                    printf("1 - Ajouter bus\n");
                    printf("2 - Afficher\n");
                    printf("3 - Supprimer\n");
                    printf("4 - Ajouter Chauffeurs\n");
                    printf("5 - Trier par marque\n");
                    printf("6 - Trier par nombre de places\n");
                    printf("0 - Quitter\n");
                    printf("Entrez votre choix: ");
                    scanf("%d", &choix_sous_menu);
                    if (choix_sous_menu == 1) {
                        prop = ajout_bus();
                        nombre_bus++;
                    } else if (choix_sous_menu == 2) {
                        system("cls");
                        printf("### RESUME BUS ### \nLigne : %d \nPlaces : %d \nConducteur : %s\n", prop.line, prop.seats, prop.driver);

                    } else if (choix_sous_menu == 3) {
                        prop.line = 0;
                        prop.seats = 0;
                        strcpy(prop.driver, "NULL");
                        nombre_bus--;
                        printf("\nVotre bus a bien été supprimé !\n");

                    } else if (choix_sous_menu == 4) {
                        int nb;

                        printf("Combien de chauffeur souhaitez-vous ajouter ? ");
                        scanf("%d", &nb);
                        char array_driver[nb][50];

                        for (int i = 0; i < nb ; i++) {
                            printf("Enter le nom du chauffeur N°%d\n", i);
                            scanf(" %[^\n]%*c", array_driver[i]);
                        }

                        for (int i = 0; i < nb ; i++) {
                            printf("Chauffeur numéro %d : %s \n", i, array_driver[i]);
                        }
                    }
                } while (choix_sous_menu != 0);
                break;


            case 2:
                do {
                    printf("\nMENU Gérer ligne\n");
                    printf("1 - Ajouter\n");
                    printf("2 - Consulter\n");
                    printf("3 - Supprimer\n");
                    printf("4 - Afficher bus d'une ligne\n");
                    printf("5 - Trier par nombres de stations\n");
                    printf("0 - Quitter\n");
                    printf("Entrez votre choix: ");
                    scanf("%d", &choix_sous_menu);

                    if (choix_sous_menu == 1) {
                        line = ajout_line();
                    }

                    if (choix_sous_menu == 2) {
                        system("cls");
                        printf("### RESUME LIGNE ### \nLigne : %d \nBus min sur la ligne : %d \nBus max sur la ligne : %d\nNombres de stations sur la ligne : %d\n", line.num, line.minb, line.maxb, line.nbstations);
                    }

                    if (choix_sous_menu == 3) {
                        line.num = 0;
                        line.minb = 0;
                        line.maxb = 0;
                        line.nbstations = 0;
                        nombre_bus--;
                        printf("Ligne supprimée avec succès !");
                    }

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
                        printf("Min bus : %d\n", line.minb);
                    } else if (choix_sous_menu == 2) {
                        printf("Max bus : %d\n", line.maxb);
                    } else if (choix_sous_menu == 3) {
                        printf("Moyenne bus : %d\n", nombre_bus);
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
    int i = 0;
    struct bus prop;

        printf("\nVeuillez entrer l'ID du bus : ");
        scanf ("%d", &prop.id);

        printf("\nEntrer la ligne du bus : ");
        scanf ("%d", &prop.line);

        printf("\nEntrer le nombre de places disponibles du bus : ");
        scanf ("%d", &prop.seats);

        printf("\nEnter le nom du chauffeur de bus : ");
        scanf(" %[^\n]%*c", prop.driver);

        printf("\nEntrer la marque du bus : ");
        scanf(" %[^\n]%*c", prop.marque);

        printf("\n### RECAPITULATIF ### \nID Bus : %d\nLigne : %d\nPlaces : %d\nConducteur : %s\nMarque : %s\n", prop.id, prop.line, prop.seats, prop.driver, prop.marque);

        return prop;
}

struct line ajout_line() {
    int i = 0;
    struct line newline;

    printf("\nEntrer le numéro de la ligne : ");
    scanf ("%d", &newline.num);

    printf("\nEntrer le nombre de bus minimum pour cette ligne : ");
    scanf ("%d", &newline.minb);

    printf("\nEntrer le nombre de bus maximum pour cette ligne : ");
    scanf("%d", &newline.maxb);

    printf("\nEntrer le nombre de stations pour cette ligne : ");
    scanf("%d", &newline.nbstations);

    return newline;
}
