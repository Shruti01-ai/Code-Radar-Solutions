#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%c%c%c",&a,&b,&c);
    if(a==b && b==c && a==c){
        printf("Equilateral");
    }
    else if(a==b || b==c || a==c){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;


}