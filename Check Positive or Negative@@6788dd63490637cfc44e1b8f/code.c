#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>0){
        printf("Positive",a);
    }
    else if(a || b<0){
        printf("Negative",b);
    }
    else{
        printf("Zero",c);
    }
    return 0;
}