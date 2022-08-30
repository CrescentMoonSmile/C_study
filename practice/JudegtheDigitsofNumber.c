/*输入的数除以10，另一个变量自加，若商非零则继续*/

#include <stdio.h>
int main()
{
    long long n;
    int count = 0;

    printf("输入一个整数: ");
    scanf("%lld", &n);

    while(n != 0)
    {
        // n = n/10
        n /= 10;
        ++count;
    }

    printf("数字是 %d 位数。", count);
}

/*反向思考：变量1乘10，变量2自加，输入的数除以变量1商为零时，
变量2为输入的数的位数*/
