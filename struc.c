#include <stdio.h>
#include <stdlib.h>

struct bus {
    int id;
    int line;
    int seats;
    char driver[50];
};

int main() {
    int nb;
    int i;

    printf("Combien souhaitez-vous ajouter de bus ?\n");
    scanf("%d", &nb);

    struct bus prop[nb];

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
        printf("\nID : %d \nLigne : %d \nPlaces : %d \nConducteur : %s", prop[i].id, prop[i].line, prop[i].seats, prop[i].driver);
    }

    return 0;
}
