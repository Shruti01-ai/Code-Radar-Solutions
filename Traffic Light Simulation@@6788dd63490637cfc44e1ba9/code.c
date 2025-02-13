#include <stdio.h>
int main(){
    char light;
    scanf("%c",&light);
    switch(light){
        case('R'): printf("stop");
        break;
        case('G'): printf("Go");
        break;
        case('Y'): printf("slow Down");
        break;
        default: printf("Invalid input");

    }
    return 0;
}