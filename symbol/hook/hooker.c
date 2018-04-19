#include <stdio.h>

static __attribute__ ((weakref("bar"))) void foo();

int main() {
    if (foo) foo();
    return 0;
}
