#include <stdio.h>

int main() {
    int integerVar = 100;
    double doubleVar = 20.0;
    char charVar = 'G';

    printf("Value of integerVar: %d\n", integerVar);
    printf("Value of doubleVar: %lf\n", doubleVar);
    printf("Value of charVar: %c\n", charVar);

    return 0;
    
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of char: %lu bytes\n", sizeof(char));

    return 0;
}