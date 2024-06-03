/*
求前n项和：
f(n) = 1 + 1/2 + 1/3 + ... + 1/n
*/

#include "stdio.h"

int main(){
    double sum = 0.0;
    int num;
    scanf("%d", &num);
    for (int n = 1; n <= num; n++)
    {
        sum += 1.0/n; // 这里要用1.0/n，1/n会取整，始终为0
    }
    printf("f(%d) = %f", num, sum);
    return 0;
}