#include <stdio.h>

extern int ref;

int strong = 1;
int weak1;
__attribute__((weak)) weak2 = 2;

int main() {
    printf("%d %d %d %d\n", strong, weak1, weak2, ref);
    return 0;
}
