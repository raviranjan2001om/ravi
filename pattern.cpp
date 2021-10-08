#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		for (j=1;j<=19;j++)
		{
		if((i+j)==11||j==9+i ||i==10 )
			{
				printf(" *");
			}
		}
		else	
		printf(" ");
	}
	printf("\n");
	
}
