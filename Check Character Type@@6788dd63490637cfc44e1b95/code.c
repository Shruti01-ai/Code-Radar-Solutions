#include <stdio.h>


int main() {
    char ch;

    
    printf("Enter a character: ");
    scanf("%c", &ch);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    }

    else if (isdigit(ch)) {
        printf("Digit\n");
    }
    
    else {
        printf("Special Character\n");
    }

    return 0;
}