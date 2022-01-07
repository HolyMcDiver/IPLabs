#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    double a, b, c;

    srand(time(NULL));

    a = (double)rand() / (double)((unsigned)RAND_MAX);
    b = (double)rand() / (double)((unsigned)RAND_MAX);
    c = (double)rand() / (double)((unsigned)RAND_MAX);
    printf("a: %f\nb: %f\nc: %f", a, b, c);
}