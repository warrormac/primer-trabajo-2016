#include <stdio.h>

void cel(void)
{
    float f,c;
    int l,u,a;

    l=-17;
    u=148;
    a=11;

    c=l;
    printf("tabla en Celsius a fahrenheit \n");
    while (f<=148)
    {
        f=((5.0/9)*c)+32.0;
        printf("%3.0f %6.1\n",f,c);
        c=c+a;
    }
}
int main()
{
    cel();
    return 0;
}
