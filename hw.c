#include <stdio.h>
void hell()
{
    printf("I");
}
void o()
{
    printf("love");
}
void _()
{
    printf(" ");
}
void world()
{
    printf("C");
}
int main(void)
{
    void(*hw)(void);
    hw= hell;
    hw();
    hw = _;
    hw();
    hw = o;
    hw();
    hw = _;
    hw();
    hw = world;
    hw();
}