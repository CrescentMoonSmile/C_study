/*思路：翻转后是否相等
1. 直接翻转
2. 转换成字符串后翻转*/

#include <stdio.h>

int main(void)
{
    int n, reversedInteger = 0, remainder, originalInteger;

    printf("输入一个整数：");
    scanf("%d", &n);

    originalInteger = n;
    while (n != 0) {
        remainder = 0;
        reversedInteger = reversedInteger * 10 + remainder;
        n /= 10;
    }
    if (originalInteger == reversedInteger)
        printf("%d 是回文数。", originalInteger);
    else
        printf("%d 不是回文数。", originalInteger);

    return 0;
}
