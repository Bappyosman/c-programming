#include <stdio.h>
#include <ctype.h> // for isalpha function

int main() {
    char paragraph[1000];
    int letterCount = 0;

    printf("Enter a paragraph: ");
    fgets(paragraph, sizeof(paragraph), stdin);

    for(int i = 0; paragraph[i] != '\0'; i++) {
        if(isalpha(paragraph[i])) {
            letterCount++;
        }
    }

    printf("The number of letters in the paragraph is: %d\n", letterCount);

    return 0;
}

