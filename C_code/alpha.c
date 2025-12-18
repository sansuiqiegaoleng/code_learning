#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char alpha;
    scanf("%c", &alpha);
    if (isalpha(alpha))
    {
        switch (tolower(alpha))
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("元音\n");
            break;

        default:
            printf("辅音\n");
            break;
        }
    }

    return 0;
}
