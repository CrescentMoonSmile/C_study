//#include <stdio.h>
//
//int main() {
//    int number, num;//��Ϊ����ʹ����>>,���Զ���Ϊ����
//    scanf("%d", &number);
//    //Ӧ�������˸����Ĵ洢��ʽ
//    num = number >> 31;
//    if (num == 0) {
//        if (number == 0) {
//            printf("�������0");
//        } else {
//            printf("�����������");
//        }
//    } else {
//        printf("��������Ǹ���");
//    }
//    return 0;
//}

#include<stdio.h>

int main(){
    double  number;
    printf("������һ������: ");
    scanf("%lf", &number);
    if(number < 0.0)
        printf("��������Ǹ���>_<\n");
    else if(number > 0.0)
        printf("�������������-.-\n");
    else
        printf("�����������0.0\n");
}
