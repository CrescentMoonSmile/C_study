/*������� greatest common divisor*/

/*��С����������й������������µ�gcd��*/
//#include <stdio.h>
//
//int main()
//{
//    int n1, n2, i, gcd;
//
//    printf("�����������������Կո�ָ�: ");
//    scanf("%d %d", &n1, &n2);
//
//    for(i=1; i <= n1 && i <= n2; ++i)
//    {
//        // �ж� i �Ƿ�Ϊ���Լ��
//        if(n1%i==0 && n2%i==0)
//            gcd = i;
//    }
//
//    printf("%d �� %d �����Լ���� %d", n1, n2, gcd);
//
//    return 0;
//}

/*շת������ı��֡���շת���*/
//#include <stdio.h>
//int main()
//{
//    int n1, n2;
//
//    printf("�������������Կո�ָ�: ");
//    scanf("%d %d",&n1,&n2);
//
//    while(n1!=n2)
//    {
//        if(n1 > n2)
//            n1 -= n2;
//        else
//            n2 -= n1;
//    }
//    printf("GCD = %d",n1);
//
//    return 0;
//}


/*շת�����������*/
//#include <stdio.h>
//
//int main()
//{
//    int n1, n2;
//
//    printf("�������������Կո�ָ�: ");
//    scanf("%d %d",&n1,&n2);
//
//    // ���������Ǹ���������ת��Ϊ����
//    n1 = ( n1 > 0) ? n1 : -n1;
//    n2 = ( n2 > 0) ? n2 : -n2;
//
//    while(n1!=n2)
//    {
//        if(n1 > n2)
//            n1 -= n2;
//        else
//            n2 -= n1;
//    }
//    printf("GCD = %d",n1);
//
//    return 0;
//}

/*�ݹ鷨������շת��������з�װ*/
//#include <stdio.h>
//int hcf(int n1, int n2);
//int main()
//{
//   int n1, n2;
//   printf("��������������: ");
//   scanf("%d %d", &n1, &n2);
//
//   printf("%d �� %d �����Լ��Ϊ %d", n1, n2, hcf(n1,n2));
//   return 0;
//}
//
//int hcf(int n1, int n2)
//{
//    if (n2 != 0)
//       return hcf(n2, n1%n2);
//    else
//       return n1;
//}

/*շת�����*/
//#include <stdio.h>
//
//int main()
//{
//    int a,b;
//    int t;
//    scanf("%d %d", &a, &b);
//    while (b !=0 ){
//        t = a%b;
//        a = b;
//        b = t;
//        printf("a=%d b=%d t=%d\n",a , b, t);
//    }
//    printf("���Լ����%d\n", a);
//    return 0;
//}

/*���һ�����Ӧ�������ʼ�ݼ��������ĵ�һ�������������������*/
#include <stdio.h>

int main()
{
    int a,b;
    int t;
    scanf("%d %d", &a, &b);
    while (b !=0 ){
        t = a%b;
        a = b;
        b = t;
        printf("a=%d b=%d t=%d\n",a , b, t);
    }
    printf("���Լ����%d\n", a);
    return 0;
}
