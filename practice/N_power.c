/*输入基数和指数计算一个数的次方，
主要有以下几种方式：1. 循环；
2. math.h头文件中的pow()函数；3. 递归*/

#include <stdio.h>
#include <math.h>

int power(int n1, int n2);

int main()
{
    double base, exponent, result;
    //int base, powerRaised, result;

    printf("基数: ");
    scanf("%lf", &base);

    printf("指数: ");
    scanf("%lf", &exponent);

    //计算方法1
    while (exponent != 0)
    {
        result *= base;
        --exponent;
    }
    printf("结果：%lld", result);

    // 计算方法2
    result = pow(base, exponent);
    printf("%.1lf^%.1lf = %.2lf", base, exponent, result);

    //计算方法3
    result = power(base, powerRaised);
    printf("%d^%d = %d", base, powerRaised, result);

    return 0;
}

int power(int base, int powerRaised)
{
    if (powerRaised != 0)
        return (base*power(base, powerRaised-1));
    else
        return 1;
}
