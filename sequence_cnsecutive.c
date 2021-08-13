#include<stdio.h>
int main()
{
	int a[10],b[10],num,n,result,c[10],i,count=0;
	n=sizeof(c)/sizeof(c[0]);
	printf("enter value of num=");
	scanf("%d",&num);
	int x,y;	
	for(i=0,x=1;x<=num;x++)
	{
		for(y=1;y<=x;y++,i++)
	        {
			a[i]=x;
			printf("a[%d] %d\n",i,a[i]);
			count=count+1;
	 		}
	}
	for(i=0;i<count;i++)
		scanf("%d",&c[i]);

//	for(i=0;i<count;i++)
//		printf("c[%d]=%d\n",i,c[i]);
	
	for(i=0;i<count;i++)
	{
		if(a[i]!=c[i])
			break;	
		else 
		continue;
	}
	if(i==count)
			printf("sequence is valid\n");
			else
			printf("sequence is invalid\n");
		}
	
				


