/*
正序分解整数：输入一个非负整数，正序输出它的每一位数字。
如：输入：12345  输出：1 2 3 4 5
*/

// 思路：先把输入的整数倒过来

#include "stdio.h"

int main(){
    int num;

    scanf("%d", &num);
    // num = 12345;
    int t = 0;
    do
    {
        int digit = num % 10;
        t = t * 10 + digit;
        num /= 10;
    } while (num > 0);
    
    // printf("%d", t);

    num = t;
    do
    {
        int digit = num % 10;
        printf("%d", digit);
        if (num > 9)
        {
            printf(" ");
        }
        
        num /= 10;
    } while (num > 0);
    printf("-");
    printf("\n");
    
    return 0;
}