#include<stdio.h>
#include<ctype. h>
int main()
{
int c,n=10,x1=0, x2=0, x3=0;
for (int i = 0; i < n;i++)
c = getchar();
if (isalpha(c))//如果是字母，则返回值为真
x1++;
else if (isdigit(c))//如果是数字，则返回值为真
x2++;
else
x3++;
printf("%d %d %d\n", x1, x2, x3);
return 0;
}
