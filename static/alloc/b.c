int shared = 5;

void swap(int *a, int *b) {
    *a ^= *b ^= *a ^= *b;
}
