#include <stdio.h>

int main() {
    char paragraph[1000];
    char noSpaceParagraph[1000];
    int j = 0;

    printf("Enter a paragraph: ");
    fgets(paragraph, sizeof(paragraph), stdin);

    for(int i = 0; paragraph[i] != '\0'; i++) {
        if(paragraph[i] != ' ') {
            noSpaceParagraph[j] = paragraph[i];
            j++;
        }
    }
    noSpaceParagraph[j] = '\0'; // Null-terminate the string

    printf("Paragraph without spaces: %s\n", noSpaceParagraph);

    return 0;
}

