#include <stdio.h>
#include <stdlib.h>

int menu(void);
struct bus ajout_bus();
int nbbus;

struct bus {
    int id;
    int seats;
    int line;
    char driver[50];
};

struct ligne {
    int number;
    int length;
    int nbstations;
    int minbus;
    int maxbus;
};

int main(void) {
    int choix = menu();

    return 0;
}

struct bus ajout_bus()
{
  struct bus bus1;

  printf("Entrer l'ID du bus : ");
  scanf ("%d", &bus1.id);

  printf("Entrer la ligne du bus : ");
  scanf ("%d", &bus1.line);

  printf("Entrer le nombre de places disponibles du bus : ");
  scanf ("%d", &bus1.seats);

  printf("Enter le nom du chauffeur de bus : ");
  scanf (" %[^\n]%*c", bus1.driver);

  return bus1;
}

int menu(void) {
    int nbus;
    int choix;
    do {


        printf("#### MENU ####\n");
        printf("1 - Gérer bus\n");
        printf("2 - Gérer ligne\n");
        printf("3 - Statistiques\n");
        printf("0 - Quitter\n");
        printf("Votre choix : ");

        scanf("%d", &choix);

        switch(choix) {
            case 1:
                printf("1 - Ajouter un bus\n");
                printf("2 - Afficher\n");
                printf("3 - Consulter\n");
                printf("4 - Supprimer\n");
                printf("5 - Afficher Chauffeurs\n");
                printf("6 - Trier par marque\n");
                printf("7 - Trier par nombre de places\n");
                printf("0 - Quitter\n");
                printf("Votre choix : ");

                scanf("%d", &choix);
                if (choix == 1) {
                    struct bus rbus;
                    rbus = ajout_bus();
                    printf("\nID du bus : %d", rbus.id);
                    printf("\nLigne du bus : %d", rbus.line);
                    printf("\nPlaces disponibles dans le bus : %d", rbus.seats);
                    printf("\nNom du chauffeur : %s\n", rbus.driver);
                }
                break;
            case 2:
                printf("1 - Ajouter\n");
                printf("2 - Afficher tous\n");
                printf("3 - Consulter\n");
                printf("4 - Supprimer\n");
                printf("5 - Afficher bus d'une ligne\n");
                printf("6 - Trier par nombres de stations\n");
                printf("0 - Quitter\n");

                scanf("%d", &choix);
                break;
           case 3:
                printf("1 - Min bus par ligne\n");
                printf("2 - Max bus par ligne\n");
                printf("3 - Moyenne bus par ligne\n");
                printf("0 - Quitter\n");

                scanf("%d", &choix);
                break;
            }
        } while (choix != 0);

     return choix;
}
