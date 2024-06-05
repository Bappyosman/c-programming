#include <stdio.h>
int customFunction(int value);
int main(void)
{
int D11=4,D12=7,D13=6;
int out, x = 100 * D11 + 10 * D12 + D13;
// For D11, D12, D13 refer to your ID
out = customFunction(x);
printf("%d", out);
return 0;
}
int customFunction(int value)
{
if(value == 1)
return 0;
if(value % 2 == 0)
return 5 + customFunction(value / 2);  //if value is even
return 6 + customFunction(value - 1); // if value is odd
}

