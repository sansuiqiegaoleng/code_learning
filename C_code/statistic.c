#include <stdio.h>
int count_vowels(char str[]);

int main(void)
{
    char str[100];
    scanf("%s", str);
    int n = count_vowels(str);
    printf("%d\n", n);
    return 0;
}

int count_vowels(char str[])
{
    int i = 0, n = 0;
    char yuanyin[5] = {'a','e','i','o','u'};
    while (str[i] != '\0')
    {
        int flag = 1;
        for (int j = 0; j < 5; j++)
        {
            if (yuanyin[j] == str[i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            n++;
        i++;
    }
    return n;
}