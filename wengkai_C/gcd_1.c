/*
eg3： 求最大公约数
输入两个数a和b，输出他们的最大公约数
输入：12 18
输出： 6
*/

/*
思路：

枚举法
1、设t为2；
2、如果u和v都能被t整除，则记下这个t；
3、t加1后重复第2步，直到t等于u或v；
4、那么，曾经记下的最大的可以同时整除u和v的t就是gcd。
*/

#include "stdio.h"

int main(){
    int a, b, min;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        min = b;
    }
    else
    {
        min = a;
    }

    int ret;
    for (int i = 1; i < min; i++)
    {
        if (a % i == 0)
        {
            if (b % i == 0)
            {
                ret = i;
            }   
        }  
    }
    printf("%d和%d的最大公约数是：%d", a, b, ret);
    return 0;
}