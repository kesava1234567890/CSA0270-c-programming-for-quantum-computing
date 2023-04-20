#include<stdio.h>
main()
{
	int a[25][25],b[25][25],c[25][25],i,j,m,n;
	printf("\n enter the rows and columns of two matrices");
	scanf("%d%d",&m,&n);
	printf("\n enter the elements of a matrix");
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	printf("\n enter the elements of b matrix");
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&b[i][j]);
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	c[i][j]=a[i][j]+b[i][j];
	printf("\n the addition of two matrices");
	for(i=0;i<m;i++)
	{
	printf("\n");
	
	for(j=0;j<n;j++)
	{
	printf("\t%d",c[i][j]);
	}
	}
}
