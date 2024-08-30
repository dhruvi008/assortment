#include<conio.h>
#include<stdio.h>

void main()
{
	int i,j,ary1[20][20],r,c,max;
	clrscr();

	printf("Enter no. of rows: ");
	scanf("%d",&r);
	printf("Enter no. of cols: ");
	scanf("%d",&c);

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter a[%d][%d] : ",i+1,j+1);
			scanf("%d",&ary1[i][j]);
		}
	}
	max=ary1[0][0];

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(ary1[i][j]>max)
			{
				max=ary1[i][j];
			}
		}
	}

	printf("\nThe max number is : %d",max);

	getch();

}