#include <stdio.h>
int main(){
    char a,b,c;
    scanf("%c%c%c",&a,&b,&c);
    if(a==b && b==c && c==a){
        printf("Equilateral");
    }
    else if(a==b || b==c || c==a){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;


}