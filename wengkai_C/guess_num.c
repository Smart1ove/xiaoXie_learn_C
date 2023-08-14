#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main(){
    srand(time(0));
    int number = rand() % 100 + 1;
    int a;
    int count = 0;
    printf("我已经想好了一个1-100之间的整数：\n");
    do
    {
        count++;
        printf("请输入一个整数：");
        scanf("%d", &a);
        if (a > number)
        {
            printf("大了\n");
        }
        else if (a < number)
        {
            printf("小了\n");
        }
        
        
    } while (a != number);

    printf("恭喜您猜对了！本次总共猜了%d次。", count);
    
    return 0;

}