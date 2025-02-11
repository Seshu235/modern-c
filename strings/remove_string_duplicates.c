// Write a C program to removes duplicates in a string

#include <stdio.h>
#include <string.h>

char *removeDuplicates(char *s)
{
    char count[256] = {0};
    int index = 0;
    int length = strlen(s);

    for (size_t i = 0; i < length; i++)
    {
        if (count[s[i]] == 0)
        {
            s[index++] = s[i];
            count[s[i]]++;
        }
    }
    s[index] = '\0';

    return s;
}

int main()
{
    char buffer[64];

    printf("Enter string: ");
    fgets(buffer, 64, stdin);
    buffer[strcspn(buffer, "\n")] = '\0';

    printf("%s\n", removeDuplicates(buffer));
    return 0;
}