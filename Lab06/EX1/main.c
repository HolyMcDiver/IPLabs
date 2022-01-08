#include <stdio.h>
#include "isodd.h"
#include "getinteger.h"
int main(void){
	int n;
	printf("Please, give a binary number:  ");
	n = getinteger(5);
	while (n != 1){
		printf("%d\n", n);
		isodd(n);
		if (isodd(n) == 1){
			n = (3*n)+1;
		}
		else if (isodd(n) == 0){
			n = n/2;
		}
	}
}
