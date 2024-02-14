#include <stdio.h>
#include <stdlib.h>

struct bus {
    int id;
    int line;
    int place;
};

int main(void) {
    int caca = 1;
    struct bus bus2 + caca;

    bus2.id = 192834;
    bus2.line = 4;
    bus2.place = 68;

    printf("%d \n%d \n%d", bus2.id, bus2.line, bus2.place);

}

