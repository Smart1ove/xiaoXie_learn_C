#include "stdio.h"

int main(){
    int a, b, c;
    int max = 0;
    printf("请输入三个整数：");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            max = a;
        }else{
            max = c;
        } 
    }else{
        if (b > c)
        {
            max = b;
        }else{
            max = c;
        }  
    }
    printf("最大的整数是：%d", max);
    return 0;
}