#include <stdio.h>
#include <stdlib.h>

struct details {
  char name[20];
  char sec[20];
  float per;
};

void print_struct(struct details str_arr[]);

int main() {
  struct details student[3] = {
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
  return 0;
}

/* void print_struct(struct details str_arr[]) {
  int i;

  for (i = 0; i < 3; i++) {
    printf("Name: %s\n", str_arr[i].name);
    printf("Section: %s\n", str_arr[i].sec);
    printf("Percentage: %.2f\n", str_arr[i].per);
    printf("\n");
  }
} */

void ajout_bus(struct details)
