extern int shared;

int main() {
    int a = 10;
    swap(&a, &shared);
    return 0;
}
