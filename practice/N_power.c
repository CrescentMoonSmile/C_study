/*���������ָ������һ�����Ĵη���
��Ҫ�����¼��ַ�ʽ��1. ѭ����
2. math.hͷ�ļ��е�pow()������3. �ݹ�*/

#include <stdio.h>
#include <math.h>

int power(int n1, int n2);

int main()
{
    double base, exponent, result;
    //int base, powerRaised, result;

    printf("����: ");
    scanf("%lf", &base);

    printf("ָ��: ");
    scanf("%lf", &exponent);

    //���㷽��1
    while (exponent != 0)
    {
        result *= base;
        --exponent;
    }
    printf("�����%lld", result);

    // ���㷽��2
    result = pow(base, exponent);
    printf("%.1lf^%.1lf = %.2lf", base, exponent, result);

    //���㷽��3
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
