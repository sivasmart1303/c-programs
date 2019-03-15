#include<stdio.h>
int main(void)
{
int s,p,k;
printf("enter the 3 nos");
scanf("%d%d%d",&s,&p,&k);
if(s>p&&s>k)
printf("s is greater");
else if(p>s&&p>k)
printf("p is greater");
else
printf("k is greater");
return 0;
}
