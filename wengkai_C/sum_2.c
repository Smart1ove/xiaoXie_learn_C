/*
求前n项和：
f(n) = 1 - 1/2 + 1/3 - 1/4 + ... + 1/n
*/

#include "stdio.h"

int main(){
    double sum = 0.0;
    int num;
    int sign = 1;
    scanf("%d", &num);
    for (int n = 1; n <= num; n++)
    {
        sum += sign*1.0/n;
        sign = -sign;
    }
    printf("f(%d) = %f", num, sum);
    return 0;
}