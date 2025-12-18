// 有 4 个学生，每个学生的数据包括学号、姓名、性别、4 门课的成绩，
//     从键盘输入 4 个学生的数据，要求输出 4 门课的平均成绩以及平均成
//         绩最高的学生信息（包括学号、姓名（可假设字符串长度为 20）、性 别（可用字符 M 或者 F 表示）、4 门课的成绩、平均分数）。同时，要
//             求用 data
//             in() 函数输入 4 个学生数据；用 data
//     aver() 函数求平均分；
//     _
//     _
//     用 data
//     max() 函数找出平均成绩最高的学生数据；学生的平均成绩数
//     _
//     据在 data
//     out() 函数中输出。（可暂不写验证输入是否正确的程序，
//     _
//     假设输入均合法,
//     提示词不一定按照截图去写，功能完成即可。）
typedef struct
{
    int num;
    char name[20];
    char gender;
    float grade[4];
    float avg_grade;
} student;

void datein(student st[], int n);
void dateaver(student st[], int n);
student datemax(student st[], int n);
void dateout(student st[], int n, student date_max);

#define N 5

int main(void)
{
    student st[N];

    datein(st, N);
    dateaver(st, N);
    student date_max = datemax(st, N);
    dateout(st, N, date_max);
    return 0;
}
void datein(student st[], int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d %s %c %f %f %f %f", &st[i].num, st[i].name, &st[i].gender, &st[i].grade[0], &st[i].grade[1], &st[i].grade[2], &st[i].grade[3]);
    }
}

void dateaver(student st[], int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        st[i].avg_grade = (st[i].grade[0] + st[i].grade[1] + st[i].grade[2] + st[i].grade[3]) / 4.0;
    }
}

student datemax(student st[], int n)
{
    int max_st = 0;
    for (int i = 0; i < n; i++)
    {
        if (st[i].avg_grade > st[max_st].avg_grade)
        {
            max_st = i;
        }
    }
    return st[max_st];
}

void dateout(student st[], int n, student date_max)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s %2f", st[i].name, st[i].avg_grade);
    }
    printf("%d %s %c %2f %2f %2f %2f", date_max.num, date_max.name, date_max.gender, date_max.grade[0], date_max.grade[1], date_max.grade[2], date_max.grade[3], date_max.avg_grade);
}
