#include<stdio.h>
#include<math.h>

int prime(int n);
int main(void)
{
    for(int i=1000;i<=2000;i++){
        int flag=prime(i);
        if(flag==1){
            printf("%d\t",i);
        }
    }
}
int prime(int n)
{
    int i;
    int flag=1;
    float s=sqrt(n);
    for(i=2;i<=s;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
   return flag;
}