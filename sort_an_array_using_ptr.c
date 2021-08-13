#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i,j,temp;
	printf("Enter size of array:");
	scanf("%d",&n);
	p=calloc(n,sizeof(int));
	printf("Enter %d Elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(*(p+j)>*(p+j+1))
			{
				temp=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=temp;
			}
		}
	}
	printf("After sorting it in ascending order:");
	for(i=0;i<n;i++)
	{
		printf("%d    ",*(p+i));
	}
	return 0;				
}
/*Enter size of array:3
Enter 3 Elements:9
2
5
After sorting it in ascending order:2    5    9*/
