#include <stdio.h>

int main(void)
{
    int a, b, c, max;

    printf("请输入三个数，用空格隔开：");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
        max = a;
    else
        max = b;
    if (max >= c)
        printf("最大值是%d", max);
    else
        printf("最大值是%d", c);
    return 0;
}
