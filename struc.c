#include <stdio.h>
#include <stdlib.h>

struct bus {
    int id;
    int seats;
    int line;
    char driver[50];
};

int main() {

    int nb;
    int i;

    do {
        printf("Combien souhaitez-vous ajouter de bus ?");
        scanf("%d", &nb);
    } while (nb == 0);

    struct details bus[3];

    for (i = 0; i < 3; i++) {
        printf("\nEntrer l'ID du bus : ");
        scanf ("%d", &bus[i].id);

        printf("\nEntrer la ligne du bus : ");
        scanf ("%d", &bus[i].line);

        printf("\nEntrer le nombre de places disponibles du bus : ");
        scanf ("%d", &bus[i].seats);

        printf("\nEnter le nom du chauffeur de bus : ");
        scanf (" %[^\n]%*c", &bus[i].driver);
    }

    for (i = 0; i < 3; i++) {
        printf("\nID : %d \nLigne : %d \nPlaces : %d \nConducteur : %s", bus[i].id, bus[i].line, bus[i].seats, bus[i].driver);
    }
  return 0;
}
/*

struct details student[3] = {    <---- Array de structure variable
    {
      "Aisiri","A",89.6
    },
    {
      "Gourav","B",60.4
    },
    {
      "Samuel","C",98.4
    },
  };
  print_struct(student);

*/
