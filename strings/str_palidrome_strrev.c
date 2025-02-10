// Write a C program to check if given string is a palindrome

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strrev(const char *src)
{
    char *temp = malloc(strlen(src) + 1);
    int length = strlen(src);

    for (size_t i = 0; src[i]; i++)
    {
        temp[i] = src[length - i - 1];
    }
    temp[length] = '\0';

    return temp;
}

int main()
{
    char buffer[64];

    printf("Enter string: ");
    fgets(buffer, 64, stdin);
    buffer[strcspn(buffer, "\n")] = '\0';

    char *ptr = strrev(buffer);

    if (!strcmp(ptr, buffer))
    {
        printf("%s is a palindrome\n", buffer);
    }
    else
    {
        printf("%s is not a palindrome\n", buffer);
    }
    return 0;
}