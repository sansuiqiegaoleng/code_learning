// 题目 3（结构体综合：员工绩效统计） 有 5 名员工，每个员工的数据包括：员工编号（int）、姓名（字符串，长度≤20）、部门（字符串，长度≤10）、3 个月绩效分数（float）。要求实现以下功能： 1. void input_emp_data(Employee emp[], int n)：输入 n 名员工的完整数据（编号、姓名、部门、3 个月绩效）；
//     2. void calc_avg_perf(Employee emp[], int n)：计算每名员工的平均绩效分数，存入结构体成员；
//     3. Employee find_max_avg(Employee emp[], int n)：找出平均绩效最高的员工（若有并列，返回第一个）；
//     4. void output_emp_info(Employee emp[], int n, Employee max_emp)：输出所有员工的完整信息（编号、姓名、部门、3 个月绩效、平均绩效），并单独输出平均绩效最高的员工信息。
// • 定义结构体 Employee 存储员工数据，无需使用指针；
// • 假设输入均合法，无需验证输入有效性。
#include <stdio.h>

typedef struct
{
    int number;
    char name[21];
    char dep[11];
    float per[3];
    float per_avg;
} Employee;

void input_emp_data(Employee emp[], int n);
void calc_avg_perf(Employee emp[], int n);
Employee find_max_avg(Employee emp[], int n);
void output_emp_info(Employee emp[], int n, Employee max_emp);

#define N 5
int main()
{
    Employee emp[N];

    input_emp_data(emp, N);
    calc_avg_perf(emp, N);
    Employee max_emp = find_max_avg(emp, N);
    output_emp_info(emp, N, max_emp);

    return 0;
}
void input_emp_data(Employee emp[], int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d %s %s %f %f %f", &emp[i].number, emp[i].name, emp[i].dep, &emp[i].per[0], &emp[i].per[1], &emp[i].per[2]);
    }
}
void calc_avg_perf(Employee emp[], int n)
{
    for (int i = 0; i < n; i++)
    {
        emp[i].per_avg = (emp[i].per[0] + emp[i].per[1] + emp[i].per[2]) / 3.0;
    }
}

Employee find_max_avg(Employee emp[], int n)
{
    int max_emp = 0;
    for (int i = 0; i < n; i++)
    {
        if (emp[i].per_avg > emp[max_emp].per_avg)
        {
            max_emp = i;
        }
    }
    return emp[max_emp];
}
void output_emp_info(Employee emp[], int n, Employee max_emp)
{
    printf("\n===== 所有员工信息 =====\n");
    printf("编号\t姓名\t部门\t绩效1\t绩效2\t绩效3\t平均绩效\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",
            emp[i].number,
            emp[i].name,
            emp[i].dep,
            emp[i].per[0],
            emp[i].per[1],
            emp[i].per[2],
            emp[i].per_avg);
    }

    // 单独输出平均绩效最高的员工
    printf("\n===== 平均绩效最高的员工 =====\n");
    printf("编号：%d\n姓名:%s\n部门:%s\n3个月绩效:%.2f、%.2f、%.2f\n平均绩效:%.2f\n",
        max_emp.number,
        max_emp.name,
        max_emp.dep,
        max_emp.per[0],
        max_emp.per[1],
        max_emp.per[2],
        max_emp.per_avg);
}
