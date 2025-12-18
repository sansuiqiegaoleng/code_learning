#include <stdio.h>
int main(void)
{
    int n=20,i;
    int F[n];
    F[0]=1,F[1]=1;
    for(i=2;i<n;i++)
        F[i]=F[i-1]+F[i-2];
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",F[i]);
        if((i%5)==0)
            printf("\n");
    }
    return 0;
}