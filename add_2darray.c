#include<stdio.h>
int main()
{
	int a1[2][2],b1[2][2],row=2,col=2;
    int c1[2][2],i,j;

    printf("Enter A array elements :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    printf("Enter B array elements  :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
        scanf("%d",&b1[i][j]);    
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
          *(*(c1+i)+j) =*(*(a1+i)+j)+*(*(b1+i)+j);
        }
    }
    printf("after addition c array:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",*(*(c1+i)+j));
        }
    }
}
/*Enter A array elements :
1
2
3
4
Enter B array elements  :
1
2
3
4
after addition c array:
2       4       6       8*/

