#include <stdio.h>

int main(){

    double i = 1;
    int count = 1;
    double sum = 1;
    double current;
    do {
        printf("Current value of sum is: %f and there have been %d loops so far.\n", sum, count);
        i++;
        current = 1/(i*i);
        sum += current;
        count++;
        
    } while (count <=100);
    return 0;
}