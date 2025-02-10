// Write a C program to check if a given string is a palindrome

#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[64];

    printf("Enter String: ");
    fgets(buffer, 64, stdin);
    buffer[strcspn(buffer, "\n")] = '\0';

    int i = 0;
    int j = strlen(buffer) - 1;

    while (i < j)
    {
        /* code */
        if (buffer[i] != buffer[j])
        {
            printf("%s is not a palindrome\n", buffer);
            return 1;
        }
        i += 1;
        j -= 1;
    }
    
    printf("%s is a palindrome\n", buffer);
    return 0;
}