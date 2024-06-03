/*
正序分解整数：输入一个非负整数，正序输出它的每一位数字。
如：输入：13425  输出：1 3 4 2 5
*/

/*
思路：
13425 / 10000 → 1
13425 % 10000 → 3425
10000 / 10 → 1000
3425 / 1000 → 3
3425 % 1000 → 425
1000 / 10 → 100
425 / 100 → 4
425 % 100 → 25
100 / 10 → 10
25 / 10 → 2
25 % 10 → 5
10 /10 → 1
5 / 1 → 5
5 % 1 → 5
1 /10 → 0

需要算出位数
*/

#include "stdio.h"
#include "math.h"

int main(){
    int num;
    scanf("%d", &num);
    // num = 12345;
    int cnt = 0; // 数字位数
    int t = num;
    do
    {
        t /= 10;
        cnt++;
    } while (t > 0);
    // printf("%d",cnt);
    
    int mask = pow(10, cnt-1);
    do
    {
        int digit = num / mask;
        printf("%d", digit);
        if (num > 9)
        {
            printf(" ");
        }
        
        num %= mask;
        mask /= 10;
    } while (num > 0);
    printf("-");
    printf("\n");
    
    return 0;
}