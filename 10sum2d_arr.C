#include<conio.h>
#include<stdio.h>
void main()
{
	int a[20][20],i,j,sum=0,size,k;
	clrscr();
	printf("Enter the size::");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("[%d][%d]::",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\t%d",a[i][j]);

		}
		printf("\n");
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			sum=sum+a[i][j];
		}
	}
	printf("sum=%d",sum);

	getch();
}
// this is my changes