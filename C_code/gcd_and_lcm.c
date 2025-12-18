#include <stdio.h>
int gcd(int n1, int n2);
int lcm(int n1, int n2);
int main()
{
    int num1, num2;
    int Gcd, Lcm;
    printf("input num1&num2\n");
    scanf("%d %d", &num1, &num2);
    Gcd = gcd(num1, num2);
    Lcm = lcm(num1, num2);
    printf("%d %d\n", Gcd, Lcm);
    return 0;
}
int gcd(int n1, int n2)
{

    while (n2 != 0)
    {
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    return n1;
}
int lcm(int n1, int n2)
{
    int temp = n1 * n2 / gcd(n1, n2);
    return temp;
}