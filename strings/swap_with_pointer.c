// Write a C program to swap two strings using pointers

#include <stdio.h>
#include <string.h>

void swap(char **ptr1, char **ptr2)
{
    char *temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    char *str1 = "Hello";
    char *str2 = "Hai";

    printf("%s\n%s\n", str1, str2);

    swap(&str1, &str2);

    printf("%s\n%s\n", str1, str2);
    return 0;
}