//#include <stdio.h>
//
//int main(void)
//{
//    char c;
//    int isLowercaseVowel, isUppercaseVowel;
//
//    printf("����һ����ĸ��");
//    scanf("%c", &c);
//
//    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' ||
//                        c == 'o' || c == 'u');
//    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' ||
//                        c == 'O' || c == 'U');
//    if (isLowercaseVowel || isUppercaseVowel)
//        printf("%c ��Ԫ��", c);
//    else
//        printf("%c �Ǹ���", c);
//
//    return 0;
//}

#include <stdio.h>
#include <string.h>

int main() {
    char *vowels = "aeiouAEIOU";

    printf("����һ����ĸ: ");
    char c = getchar();

    // ����һ��ָ����ַ����е�һ�γ��ֵ��ַ���ָ�룬����ַ����в��������ַ��򷵻�NULL��ָ�롣
    char *pos = strchr(vowels, c);
    printf("%c ��%s", c, (pos ? "Ԫ��" : "����"));

    return 0;
}
