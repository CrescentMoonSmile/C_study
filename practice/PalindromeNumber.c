/*˼·����ת���Ƿ����
1. ֱ�ӷ�ת
2. ת�����ַ�����ת*/

#include <stdio.h>

int main(void)
{
    int n, reversedInteger = 0, remainder, originalInteger;

    printf("����һ��������");
    scanf("%d", &n);

    originalInteger = n;
    while (n != 0) {
        remainder = 0;
        reversedInteger = reversedInteger * 10 + remainder;
        n /= 10;
    }
    if (originalInteger == reversedInteger)
        printf("%d �ǻ�������", originalInteger);
    else
        printf("%d ���ǻ�������", originalInteger);

    return 0;
}
