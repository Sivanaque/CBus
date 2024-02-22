#include <stdio.h>
#include <stdlib.h>

struct bus {
    int id;
    int seats;
    int line;
    char driver[50];
};

void print_struct(struct details str_arr[]);

int main() {

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
/* void print_struct(struct details str_arr[]) {    <--- AFFICHER RESULTAT
  int i;

  for (i = 0; i < 3; i++) {
    printf("Name: %s\n", str_arr[i].name);
    printf("Section: %s\n", str_arr[i].sec);
    printf("Percentage: %.2f\n", str_arr[i].per);
    printf("\n");
  }
} */

struct bus ajout_bus()
{
    int nb = 0;
    int i;
    do {
        printf("Combien souhaitez-vous ajouter de bus ?");
        scanf("%d", nb);
    } while (nb = 0);

    struct details bus[nb] = {
        {
            
        }
    }


}
