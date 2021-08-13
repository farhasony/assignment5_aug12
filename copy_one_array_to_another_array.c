#include<stdio.h>
int main()
{
	int a[100],b[100],i,n;
	int *p1=a;
	int *p2=b;
	printf("enter no of element\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter element of arr[%d]:",i);
		scanf("%d",&p1[i]);
		
	}
	printf("elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",p1[i]);
	}
	for(i=0;i<n;i++)
	{	
		p2[i]=p1[i];
	}
	printf("\ncopied elements are :");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,p2[i]);
	}
	
}
/*output:enter no of element:3
enter element of arr[0]:1
enter element of arr[1]:23
enter element of arr[2]:4
elements are
1  23  4
copied elements are :a[0]=1
a[1]=23
a[2]=4*/
