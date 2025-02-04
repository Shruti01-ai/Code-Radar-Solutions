#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>0){
        printf("Positive");
    }
    else if(b<0){
        printf("Negative");
    }
    else{
        printf("Zero");
    }
    return 0;
}