#include "stdio.h"

int main(){ 
    int x;
    scanf("%d", &x);
    int digit;
    int ret = 0;

    while (x > 0)
    {
        digit = x % 10; // 得到个位数
        // printf("%d", digit); // 能输出末尾为0的数，如700->007 
        ret = ret * 10 + digit;
        printf("x=%d,digit=%d,ret=%d\n", x, digit, ret);
        x /= 10; // 去掉个位数
    }
    printf("%d", ret);
    return 0;
    
}