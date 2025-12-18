#include<stdio.h>
int main(void)
{
    double total=100,i,route=100 ;
    for(i=0;i<9;i++)
    {
        total+=route;
        route/=2;
    }
    printf("%lf %lf\n",total,route);
    return 0;
}  