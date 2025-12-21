#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
    int x = 10, y = 20;
    int maxValue = MAX(x, y);
    // 预处理后变成 int maxValue = ((x) > (y)? (x) : (y));它的语法是：条件 ? 表达式1 : 表达式2，规则是：
    // 如果 “条件” 为真（非 0），执行并返回表达式1的值； 如果 “条件” 为假（0），执行并返回表达式2的值。

    printf("%d", maxValue);
}