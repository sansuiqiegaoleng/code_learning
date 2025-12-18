// 编写函数，统计一个字符 my_
//     Char 在字符串 my_
//         String 中出现了多少
//             次。（假设字符串足够长，提示词不一定按照截图去写，功能完成即
//                 可。）

#include <stdio.h>
#include <string.h>
#define N 10
int main(void)
{
    char my_Char[N];
    char my_String[100];
    scanf("%s", my_String);
    scanf("%s", my_Char);
    int i = 0;
    int n = 0;
    while (my_String[i] != '\0')
    {
        int flag = 1;
        int j = 0;
        while (my_Char[j] != '\0')
        {
            if(my_String[i+j]!=my_Char[j])
            {
                flag = 0;
                break;
            }
            j++;
        }
        if(flag==1)
        {
            n++;
        }
        i++;
    }
    printf("%d", n);
}