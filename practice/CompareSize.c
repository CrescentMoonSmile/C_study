#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("请输入三个数：");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        printf("%d 最大", a);
    else if (b > a && b > c)
        printf("%d 最大", b);
    else if (c > a && c > b)
        printf("%d 最大", c);
    else
        printf("有两个或单个数值相等");

    return 0;
}
