#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, x1, x2, d;
    printf("���뷽������ϵ����\n");
    scanf("%f %f %f", &a, &b, &c);

    if(a != 0) {
        d = sqrt(b*b - 4*a*c);
        x1 = (-b + d)/(2*a);
        x2 = (-b - d)/(2*a);
        if (x1 < x2)
            printf("%0.2f\t%0.2f\n", x2, x1);
        else
            printf("%0.2f\t%0.2f\n", x1, x2);
        printf("%0.2f\t%0.2f\n", x1 < x2 ? (x1, x2): (x2, x1));
    }
    return 0;
}
