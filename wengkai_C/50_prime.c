#include "stdio.h"

int main(){
   int count = 0;
   int x = 2;

   while (count < 50)
   {
    int Isprime = 1;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            Isprime = 0;
            break;
        }
        
    }
    if (Isprime)
    {
        printf("%d ", x);
        count++;
    }
    x++;
    
   }
   printf("\n");
   return 0;
   
}