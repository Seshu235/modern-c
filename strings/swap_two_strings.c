// Write a C program to swap two strings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *str1, char *str2)
{
    char *temp = malloc(strlen(str1) + 1);
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    free(temp);
}

int main()
{
    char buffer1[10] = "Hello";
    char buffer2[10] = "Hai";

    printf("%s\n%s\n", buffer1, buffer2);

    swap(buffer1, buffer2);

    printf("%s\n%s\n", buffer1, buffer2);
    return 0;
}