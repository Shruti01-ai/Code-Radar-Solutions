#include <stdio.h>
int main(){
    int a,shift;
    scanf("%d%d",&a,&shift);
    printf("%d\n",a>>shift);
    return 0;
}