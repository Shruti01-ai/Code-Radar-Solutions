#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int result = (a << 1 || a << 2 );
    
    printf("%d",result);
    return 0;
}