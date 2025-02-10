// Write a C program to find maximum occuring character in string

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char getMaxOccuringCharacter(char *str)
{
    char count[256] = {0};
    int length = strlen(str);
    char maxChar;
    int maxCount = 0;

    for (size_t i = 0; i < length; i++)
    {
        count[str[i]]++;
        if (count[str[i]] > maxCount)
        {
            maxCount = count[str[i]];
            maxChar = str[i];
        }        
    }
    return maxChar;
}

int main()
{
    char str[64];
    
    printf("Enter string: ");
    fgets(str, 64, stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Max Occured Char: %c\n", getMaxOccuringCharacter(str));

    return 0;
}