#include "stdio.h"

int main(){
    int num;
    scanf("%d", &num);
    int IsPrime = 1;
    
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            IsPrime = 0;
            continue;
        }
        printf("%d\n", i);
    }
    if (IsPrime)
    {
        printf("%d是素数", num);
    } else {
        printf("%d不是素数", num);
    }
    
    return 0;
}

// 该程序无法判断输入为1的情况，需要单独讨论1