
#include <stdio.h>

int main(){
        int i, sum, current;
        i=0;
        current=0;
        sum=0;
        do{
                current=i;
                sum = sum + current;
                i++;
        }while (i<=100);
        printf("%d\n", sum);
        return 0;
}




