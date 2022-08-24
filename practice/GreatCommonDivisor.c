/*最大公因数 greatest common divisor*/

/*从小到大求出所有公因数，并更新到gcd中*/
//#include <stdio.h>
//
//int main()
//{
//    int n1, n2, i, gcd;
//
//    printf("输入两个正整数，以空格分隔: ");
//    scanf("%d %d", &n1, &n2);
//
//    for(i=1; i <= n1 && i <= n2; ++i)
//    {
//        // 判断 i 是否为最大公约数
//        if(n1%i==0 && n2%i==0)
//            gcd = i;
//    }
//
//    printf("%d 和 %d 的最大公约数是 %d", n1, n2, gcd);
//
//    return 0;
//}

/*辗转相除法的变种——辗转相减*/
//#include <stdio.h>
//int main()
//{
//    int n1, n2;
//
//    printf("输入两个数，以空格分隔: ");
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


/*辗转相减正负数版*/
//#include <stdio.h>
//
//int main()
//{
//    int n1, n2;
//
//    printf("输入两个数，以空格分隔: ");
//    scanf("%d %d",&n1,&n2);
//
//    // 如果输入的是负数，将其转换为正数
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

/*递归法——对辗转相除法进行封装*/
//#include <stdio.h>
//int hcf(int n1, int n2);
//int main()
//{
//   int n1, n2;
//   printf("输入两个正整数: ");
//   scanf("%d %d", &n1, &n2);
//
//   printf("%d 和 %d 的最大公约数为 %d", n1, n2, hcf(n1,n2));
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

/*辗转相除法*/
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
//    printf("最大公约数是%d\n", a);
//    return 0;
//}

/*与第一种相呼应，从最大开始递减，遇到的第一个公因数就是最大公因数*/
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
    printf("最大公约数是%d\n", a);
    return 0;
}
