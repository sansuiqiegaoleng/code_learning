#include<stdio.h>
int main(void)
{
    int num[10]={1,2,3,4,8,9};
    int number=6;
    int i, index;
    int insert=7;
    for (i=0;i<number;i++)
    {
        if(num[i]>insert)
            break;
    }
    index=i;
    for(i=number;i>=index;i--)
    {
        num[i+1]=num[i];

    }
    num[i+1]=insert;
    for(i=0;i<number+1;i++)
    {
        printf("%d\t",num[i]);
    }
    return 0;
}