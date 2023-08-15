#include "stdio.h"

int main(){
    int fact = 1;
    int n;
    int i = 1;
    scanf("%d", &n);
    while (i <= n)
    {
        fact *= i;
        i++;
    }
    printf("%d!=%d", n, fact);
    return 0;
    
}