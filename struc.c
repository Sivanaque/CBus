#include <stdio.h>
#include <stdlib.h>

struct bus {
    int id;
    int line;
    int place;
};

int main(void) {
    char caca[10] = "salut";
    struct bus caca;

    caca.id = 192834;
    caca.line = 4;
    caca.place = 68;

    printf("%d \n%d \n%d", caca.id, caca.line, caca.place);

}

