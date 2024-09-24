#include <stdio.h>

typedef unsigned char byte;

int main()
{

    byte x = 155;
    for(int i = 0; i < 8; i++)
    {
        printf("%c", (x & 0x80) ? '1' : '0');
        x <<= 1;
    }
}