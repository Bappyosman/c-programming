#include <stdio.h>
#include <string.h>
int main(void)
{
    int i;
    char variable[30] = "Khoor dqg dglrv iurp FVH494";

    puts(variable);
    if(strlen(variable) >= 6)
    {
        for(i = 0; i < strlen(variable); ++i)
        {
            if(variable[i] == ' ')   //if the string of index= space then go to print
                printf("%c", variable[i]);  //variable[0]=k means if index 
            else
                printf("%c", variable[i] - 3);//variable[0]-3=H means ascii value of k is 65-3=62 or H
        }
    }
    else
        printf("Nothing prints.");
    return 0;
}
