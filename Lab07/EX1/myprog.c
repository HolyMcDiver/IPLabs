#include <stdio.h>
#include "myfun.h"

int main(){
    int a, b, sum, diff;
    int *ptrsum, *ptrdiff;
    ptrsum = &sum;
    ptrdiff = &diff;
    a = 5, b = 4, sum = 0, diff = 0;
    goodf(a, b, sum, diff);
    printf("%d %d", sum, diff);
}