// Qualifier: const pointer to a variable
// const pointer to a variable is a constant pointer that points to a variable.
// The value of the integer can be changed.
// The value of the pointer cannot be changed.

// syntax:
//     1. type* const name;
//     2. type const* const name;

// Example:
//     1. int* const ptr;
//     2. const int* const ptr;

#include <stdio.h>

int main() {
    // variable declaration and initialization
    int i = 10;
    int j = 20;
    
    // ptr is a constant pointer to a variable
    int* const ptr = &i;

    // attempt to change the value of i
    *ptr = 20; // valid

    // atttempt to change the value of ptr
    // @todo: uncomment the line below to see the error
    // ptr = &j; // Error: assignment of read-only variable 'ptr'

    printf("i: %d\n", i); // Output: i: 20  
    printf("j: %d\n", j); // Output: j: 20
}