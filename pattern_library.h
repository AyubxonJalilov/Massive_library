#include<stdio.h>

void pattern(){
		int n=5;
	    int i,j,k;
	for(i=1; i<=n; i++)
	{
		for(j=n-1; j>=i ;j--)
		{
			printf(" ");	
		}
	for(k=1;k<=i; k++)
	{
		printf("* ");
	}
		printf("\n");
	}
}


void pattern_2()
{
	int n=5 ;
	int i,j,k;
	
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			printf("%c ",i+65);
		}
		printf("\n");
	}
	
}

void pattern_3(){
	int i,j;
	for(i=1; i<=5; i++)
	{
		for(j=5; j>=i ;j--)
		{
			printf("* ");	
		}
		printf("\n");
	}
}

void pattern_4()
{
	int i,j,k;
	int p_height=5;
	for(i=p_height;i>=1;i--)
	{
		for(k=p_height-1;k>=i;k--)
	{
		printf(" ");
		
	}
	for(j=i;j>=1;j--)
	{
		printf("* ");
	}
	printf("\n");
	}
}


void pattern_5()
{
	int size=5;
	int i,j;
	for(i==size;i>=-size;i--)
	{
		for(j=size;j>abs(i);j--)
	{
		printf("* ");
		}
		printf("\n");
	}
	}
	
	#include<stdio.h>

void pattern_6()
{
	int n=5;
	int i,j;
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n;j++)
		{
			printf("%2d",(i*j)%2);
		}
		printf("\n");
	}
}

#include<stdio.h>

void pattern_8()
{
	int i,j;
	for(i=4;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c ",j+65);
		}
		printf("\n");
	}
}


void pattern_7()
{
	int n=5;
	int i,j;
	int px;
	
	for(i=1; i<=n; i++)
	{
		px=1;
		for(j=1;j<=n;j++)
		{
			printf("%2d",px);
			px=px*(i-j)/j;
		}
		printf("\n");
	}
}


