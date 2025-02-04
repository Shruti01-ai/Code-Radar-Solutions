#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("10%d",a,b);
    }
    else if(b>a){
        printf("15%d",a,b);
    }
    return 0;
}