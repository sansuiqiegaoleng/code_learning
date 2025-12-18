#include <stdio.h>
int main(void)
{
    int i = 1;
    int s = 0;
    int m = 0;

    while (i <= 5)
    {
        m = m * 10 + i;
        i++;
        s = s + m;
    }
    printf("%d\n", s);
    return 0;
}