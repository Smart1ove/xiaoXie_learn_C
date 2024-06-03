/*
eg3： 求最大公约数
输入两个数a和b，输出他们的最大公约数
输入：12 18
输出： 6
*/


/*
思路：
辗转相除法：

1、如果b等于0，计算结束，a就是最大公约数；
2、否则，计算a除以b的余数，让a等于b，而b等于那个余数；
3、回到第一步。

a	b	t
12	18	12
18	12	6
12	6	0
6	0

*/

#include "stdio.h"

int main(){
    int a, b, t;
    scanf("%d %d", &a, &b);
    while (b != 0)
    {
        t = a % b;
        a = b;
        b = t;
        printf("a=%d, b=%d, t=%d\n", a, b, t);
    }
    printf("gcd：%d\n", a);
    return 0;
}