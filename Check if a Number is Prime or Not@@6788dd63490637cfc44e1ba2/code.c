#include<stdio.h>
int main(){
int n;
    int prime = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 1;
        }
    }
    if (prime)
    {
        printf("%d Not Prime\n", n);
    }
    else
    {
        printf("%d Prime\n", n);
    }
    return 0;
}