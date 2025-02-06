#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num << 31){
        printf("Set\n");
    }
    else{
        printf("Not Set");
    }
    return 0;
}