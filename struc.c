#include <stdio.h>
#include <stdlib.h>

struct bus {
    int id;
    int seats;
    int line;
    char driver[50];
};

int main() {

    int nb = 0;
    int i;
    struct bus prop[nb];

   do {
        printf("Combien souhaitez-vous ajouter de bus ?\n");
        scanf("%d", &nb);
    } while (nb == 0); */

    for (i = 0; i < 3; i++) {
        printf("\nEntrer l'ID du bus %d : ", i);
        scanf ("%d", &prop[i].id);

        printf("\nEntrer la ligne du bus %d : ", i);
        scanf ("%d", &prop[i].line);

        printf("\nEntrer le nombre de places disponibles du bus %d : ", i);
        scanf ("%d", &prop[i].seats);

        printf("\nEnter le nom du chauffeur de bus %d : ", i);
        scanf (" %[^\n]%*c", prop[i].driver);
    }

    for (i = 0; i < 3; i++) {
        printf("\nID : %d \nLigne : %d \nPlaces : %d \nConducteur : %s", prop[i].id, prop[i].line, prop[i].seats, prop[i].driver);
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



#include<stdio.h>
#include <string.h>
struct student{
int rollno;
char name[10];
};
int main(){
int i;
struct student st[5];
printf("Enter Records of 5 students");
for(i=0;i<5;i++){
printf("\nEnter Rollno:");
scanf("%d",&st[i].rollno);
printf("\nEnter Name:");
scanf("%s",st[i].name);
}
printf("\nStudent Information List:");
for(i=0;i<5;i++){
printf("\nRollno:%d, Name:%s",st[i].rollno,st[i].name);
}
   return 0;
}
*/
