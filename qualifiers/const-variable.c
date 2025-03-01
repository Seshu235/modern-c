
#include <stdio.h>

int main() {
    // const variable declaration and initialization
    const int a = 10;

    // atttempt to change the value of a
    // @todo: uncomment the line below to see the error
    // a = 20; // Error: assignment of read-only variable 'a'

    // const variable value can be changed using a normal pointer
    int *ptr = &a;
    *ptr = 20;
    printf("a: %d\n", a); // Output: a: 20
    return 0;
}