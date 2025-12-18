#include<stdio.h>
int main(void)

{
    int a[10]={0};
    for(int i=0;i<10;i++)
    {
        a[i]=i;
    }
    int *p1=&a[0];
    int *p2=&a[9];
    int p=p2-p1;
    printf("%d\t",p);
    return 0;


}
