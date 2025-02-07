#include <stdio.h>


int main() {
    char ch;

    scanf("%c", &ch);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    }

    else if (ch>='0' && ch<='9') {
        printf("Digit\n");
    }
    
    else {
        printf("Special Character\n");
    }

    return 0;
}