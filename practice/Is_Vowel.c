//#include <stdio.h>
//
//int main(void)
//{
//    char c;
//    int isLowercaseVowel, isUppercaseVowel;
//
//    printf("输入一个字母：");
//    scanf("%c", &c);
//
//    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' ||
//                        c == 'o' || c == 'u');
//    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' ||
//                        c == 'O' || c == 'U');
//    if (isLowercaseVowel || isUppercaseVowel)
//        printf("%c 是元音", c);
//    else
//        printf("%c 是辅音", c);
//
//    return 0;
//}

#include <stdio.h>
#include <string.h>

int main() {
    char *vowels = "aeiouAEIOU";

    printf("输入一个字母: ");
    char c = getchar();

    // 返回一个指向该字符串中第一次出现的字符的指针，如果字符串中不包含该字符则返回NULL空指针。
    char *pos = strchr(vowels, c);
    printf("%c 是%s", c, (pos ? "元音" : "辅音"));

    return 0;
}
