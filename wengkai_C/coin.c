#include "stdio.h"

int main(){
    int x;
    scanf("%d", &x);
    for (int one = 1; one < 10 * x; one++)
    {
        for (int two = 1; two < 10 * x / 2; two++)
        {
           for (int five = 1; five < 10 * x / 5; five++)
           {
                if (one * 1 + two * 2 + five * 5 == 10 * x)
                {
                    printf("可以用%d个1角，%d个2角，%d个5角得到%d元\n", one, two, five, x);
                }
                
           }
           
        }
        
    }
    
}