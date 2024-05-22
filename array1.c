#include <stdio.h>
int main(void){
char ch = 'a';
int i, n = 18;

int seq[] = {1,4,18,19,-5,14,5,-5,11,20,2,10,-5,2,7,0,12,15};
for(i = 0; i < n; ++i){
if(seq[i] < 0) printf(" ");
else printf("%c", ch + seq[i]);
//a+index(0)=97+1=b,97+index(1)=97+4=e
}
return 0;
}
