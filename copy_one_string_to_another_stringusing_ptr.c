#include<stdio.h>
#include<string.h>
int main()
{
char str1[80],str2[80];
int *p1,*p2,i;
printf("enter string str1:\n");
fgets(str1,80,stdin);
str1[(strlen(str1)-1)]=0;
p1=str1;
p2=str2;
for(i=0;*p1;i++)
{
	p2[i]=p1[i];
}


printf(" str1 copied in str2: %s\n",str2);
}
//output:enter string:farhana
//str2: farhana
