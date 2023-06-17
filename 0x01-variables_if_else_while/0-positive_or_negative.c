#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Function to check if a number is positive or negative */
void checkNumber(int n) {
    if (n > 0) {
        printf("The number is positive.\n");
    } else if (n < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }
}

/* Main function */
int main(void) {
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    
    checkNumber(n);

    return 0;
}
