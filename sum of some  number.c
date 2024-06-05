#include <stdio.h>

int main() {
int n, i,result;
printf("enter the number :");
scanf("%d",&n);
result=0;
for (i=1;i<=n;i++)
{
  result =result+i;
}
   printf("result is %d\n",result) ;

    return 0;
}
