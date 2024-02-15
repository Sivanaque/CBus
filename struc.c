#include <stdio.h>
#include <stdlib.h>

struct Player
{
    char name[40];
    float hp;

    char weapon[10];
    int ammo;

};

int main()
{
    struct Player *p1;

    // initialize pointer
    p1 = (struct p1*) malloc(sizeof(struct Player));

    p1->ammo = 30;

    printf("Ammo count: %d\n", p1->ammo);

    // remember to free from malloc
    free(p1);

    return 0;
}
