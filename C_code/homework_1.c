//第一课上机作业

#include<stdio.h>
#include<stdlib.h> 

void start_shuzu(int **shuzu, int *size);
void sort_shuzu(int shuzu[], int size);
void print_shuzu(int shuzu[], int size);

int main(void){
    int *shuzu; 
    int size;
    start_shuzu(&shuzu, &size); 
    sort_shuzu(shuzu, size);    
    print_shuzu(shuzu, size);   
    free(shuzu); 
    return 0;
}

void start_shuzu(int **shuzu, int *size){
    printf("请输入数组的长度：\n");
    scanf("%d", size);
    *shuzu = (int*)malloc(*size * sizeof(int));
    for(int i = 0; i < *size; i++){
        printf("请输入第%d个数：", i + 1);
        scanf("%d", &(*shuzu)[i]);
    }
}

void sort_shuzu(int shuzu[], int size){
    for(int j = 1; j < size; j++){
        for(int i = 0; i < size - j; i++){
            if(shuzu[i] > shuzu[i + 1]){
                int t = shuzu[i];
                shuzu[i] = shuzu[i + 1];
                shuzu[i + 1] = t;
            }
        }
    }
}
void print_shuzu(int shuzu[], int size){
    printf("排序后的数组为：");
    for(int i = 0; i < size; i++){
        printf("%d ", shuzu[i]);
    }
}
