#include <stdio.h>
#include <string.h>

int main(void)
{
    char temp, i, j;
    char string[] = "Hello World!";
    int length = strlen(string);

    for(i = 0, j = length - 1; i < j; i++, j--)
    {
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
        
    }

    printf(string);
    return 0;
}