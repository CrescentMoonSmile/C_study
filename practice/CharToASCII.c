#include <stdio.h>

int main(void)
{
    char c;
    printf("输入一个字符：");
    scanf("%c", &c);
    printf("%c 的ASCII为 %d", c, c);
    return 0;
}
