/*此处以字符为判断条件，也可由数字进行判断
'A'对应数字65，'a'对应97
*/
#include <stdio.h>

int main()
{
    char c;

    printf("输入 u 显示大写字母，输入 l 显示小写字母: ");
    scanf("%c", &c);

    if(c== 'U' || c== 'u')
    {
       for(c = 'A'; c <= 'Z'; ++c)
         printf("%c ", c);
    }
    else if (c == 'L' || c == 'l')
    {
        for(c = 'a'; c <= 'z'; ++c)
         printf("%c ", c);
    }
    else
       printf("Error! 输入非法字符。");
    return 0;
}
