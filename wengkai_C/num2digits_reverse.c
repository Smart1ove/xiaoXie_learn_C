/*
正序分解整数：输入一个非负整数，逆序输出它的每一位数字。
如：输入：13425  输出：5 4 3 2 1
*/

#include "stdio.h"

int main(){
    int num;

    scanf("%d", &num);
    // num = 12345;

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