// 假设 int arr[6] = {22, 5, 12, 38, 20, 18};
// 分别用函数实现： ① 冒
//         泡排序；② 选择排序；③ 插入排序，从小到大重新排列后输出。至
//             少一种算法使用指针接收数组和数组长度，且通过指针遍历 /
//     交换元
//         素。（至少一种算法禁止直接使用数组下标 arr[i]，需用 *(ptr + i)
//             操作。验证可在 main 函数里分别调用三种方法函数，然后输出 3 次来
//     验证。请用注释写明函数分别用的哪种排序。）
#include <stdio.h>
void maopao(int *p, int n);
void xuanze(int *p, int n);
void charu(int *p, int n);

int main(void)
{
    int arr1[6] = {22, 5, 12, 38, 20, 18};
    int arr2[6] = {22, 5, 12, 38, 20, 18};
    int arr3[6] = {22, 5, 12, 38, 20, 18};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    maopao(arr1, n);
    xuanze(arr2, n);
    charu(arr3, n);
    return 0;
}

void maopao(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (*(p + j) > *(p + j + 1))
            {
                int temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
}

void xuanze(int *p, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i; 
        for (int j = i + 1; j < n; j++)
        {
            if (*(p + j) < *(p + min_idx))
            {
                min_idx = j;
            }
        }
        
        int temp = *(p + i);
        *(p + i) = *(p + min_idx);
        *(p + min_idx) = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
}

#include <stdio.h>


void charu(int *p, int n)
{

    if (n <= 1)
        return;

    for (int i = 1; i < n; i++) 
    {
        int now = *(p + i); 
        int j = i - 1;      

    
        while (j >= 0 && *(p + j) > now)
        {
            *(p + j + 1) = *(p + j); 
            j--;                    
        }
        *(p + j + 1) = now; 
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
}

