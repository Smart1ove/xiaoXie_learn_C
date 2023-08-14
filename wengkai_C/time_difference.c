#include "stdio.h"

int main(){
    int hour1, min1;
    int hour2, min2;

    scanf("%d %d", &hour1, &min1);
    scanf("%d %d", &hour2, &min2);

    int h = hour2 - hour1;
    int m = min2 - min1;

    if (m < 0)
    {                       
        m = m + 60;
        h--;
    }
    printf("时间差是%d小时%d分。\n", h, m);
    return 0;
}