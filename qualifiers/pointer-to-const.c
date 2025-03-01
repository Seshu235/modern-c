// Qualifiers: pointer to const
// pointer to const is a pointer that points to a constant variable.
// The value of the pointer can be changed.
// The value of the integer cannot be changed using the pointer.

// syntax:
//     1. const type* name;
//     2. type const* name;

// Example:
//     1. const int *ptr;
//     2. int const *ptr;
    

#include <stdio.h>

int main() {
    // variable declaration and initialization
    int i = 10;
    int j = 20;
    
    // ptr is a pointer to a const
    const int *ptr = &i;

    // atttempt to change the value of i
    // @todo: uncomment the line below to see the error
    // *ptr = 20; // Error: assignment of read-only location '*ptr'

    // attempt to change the value of ptr
    ptr = &j; // valid

    printf("i: %d\n", i); // Output: i: 10
    printf("j: %d\n", j); // Output: j: 20
    return 0;
}