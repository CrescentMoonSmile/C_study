/*�׳��� 0������1*/

/*�����жϼ�forѭ��*/
//#include <stdio.h>
//
//int main()
//{
//    int n, i;
//    unsigned long long factorial = 1;
//
//    printf("����һ������: ");
//    scanf("%d",&n);
//
//    // ��������Ǹ�������ʾ����
//    if (n < 0)
//        printf("Error! ����û�н׳�jiechen");
//
//    else
//    {
//        for(i=1; i<=n; ++i)
//        {
//            factorial *= i;              // factorial = factorial*i;
//        }
//        printf("%d! = %llu", n, factorial);
//    }
//
//    return 0;
//}

/*�ݹ�*/
#include <stdio.h>
long int multiplyNumbers(int n);

int main()
{
    int n;
    printf("����һ������: ");
    scanf("%d", &n);
    printf("%d! = %ld", n, multiplyNumbers(n));
    return 0;
}
long int multiplyNumbers(int n)
{
    if (n > 1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
