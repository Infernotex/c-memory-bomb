#include <stdlib.h>

int main(void) {
    while (1) {
        malloc(1024*1024);
    }

    return 0;
}