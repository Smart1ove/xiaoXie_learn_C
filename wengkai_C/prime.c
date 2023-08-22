#include "stdio.h"

int main(){
    
    for (int j = 2; j < 100; j++)
    {
        int IsPrime = 1;
        for (int i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                IsPrime = 0;
                break;
            }
        }
        if (IsPrime)
        {
            printf("%d ", j);
        }
    }
    printf("\n");
    return 0;
}