#include <stdio.h>
int main(){
    int a,b;
    char A;
    scanf("%d %d %c",&a,&b,&A);
    switch(A){
        case'+':printf("%d",a+b);
break;
        case'-':printf("%d",a-b);
break;
        case'*':printf("%d",a*b);
break;
        case'/':
        if(b!=0){
            printf("%d",a/b);
        }
        else{
            printf("error");}
break;
        default:printf("error");
break;
    }
    return 0;
}