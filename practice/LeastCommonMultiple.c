/*��С������ Least common multiple*/

/*Ӳ�㣬���������е����ֵ��ʼ�Լӣ�ֱ��Ϊ����������С������*/
//#include <stdio.h>
//
//int main()
//{
//    int n1, n2, minMultiple;
//    printf("��������������: ");
//    scanf("%d %d", &n1, &n2);
//
//    // �ж������ϴ��ֵ������ֵ�� minMultiple
//    minMultiple = (n1>n2) ? n1 : n2;
//
//    // ����Ϊ true
//    while(1)
//    {
//        if( minMultiple%n1==0 && minMultiple%n2==0 )
//        {
//            printf("%d �� %d ����С������Ϊ %d", n1, n2,minMultiple);
//            break;
//        }
//        ++minMultiple;
//    }
//    return 0;
//}

/*ͨ����С���������㣬Ҳ��ͨ��շת������ĵݹ麯�������������*/
#include <stdio.h>

int main()
{
    int n1, n2, i, gcd, lcm;

    printf("��������������: ");
    scanf("%d %d",&n1,&n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // �ж����Լ��
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    lcm = (n1*n2)/gcd;
    printf("%d �� %d ����С������Ϊ %d", n1, n2, lcm);

    return 0;
}
