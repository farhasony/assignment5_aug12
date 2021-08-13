#include<stdio.h>
void swap(int *x,int*y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
		
}
int main()
{
	int a=7,b=8;
	int *x=&a;
	int *y=&b;
	printf("before swapping a=%d,b=%d\n",a,b);
	swap(x,y);
	printf("after swapping a=%d,b=%d\n",*x,*y);
	
}
/*before swapping a=7,b=8
after swapping a=8,b=7*/
