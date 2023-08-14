#include "stdio.h"

int main(){
    // 初始化
    int price = 0;
    int bill = 0;
    // 读入金额和票面
    printf("请您输入金额及票面：");
    scanf("%d %d", &price, &bill);
    // 计算找零
    if (bill - price >= 0)
    {
        printf("找零%d元。", bill - price);
    } else{
        printf("您的余额不足，请重新支付！");
    }
    return 0;
}