#include <stdio.h>
void printString(int keyNum);
int main(void)
{
printString(1);
return 0;
}
void printString(int keyNum)
{
if(keyNum == 8)
printf("question.\n");
else
{
if(keyNum == 1 || keyNum == 4)
printf("to be, ");
else if(keyNum == 7)
printf("the ");
else if(keyNum == 5)
printf("that ");
else if(keyNum == 3)
printf("not ");
else if(keyNum == 6)
printf("is ");
else if(keyNum == 2)
printf("or ");
printString(keyNum + 1);
}
}
