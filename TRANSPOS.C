#include<conio.h>
#include<stdio.h>

void main()
{
	int i,ary1[20],n;
	clrscr();

	printf("Enter no. of digits to be entered: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] : ",i+1);
		scanf("%d",&ary1[i]);
	}

	printf("Negative numbers from array are: ");
	for(i=0;i<n;i++)
	{
		if(ary1[i]<0)
		{
			printf(" %d",ary1[i]);
		}
	}


	getch();
}