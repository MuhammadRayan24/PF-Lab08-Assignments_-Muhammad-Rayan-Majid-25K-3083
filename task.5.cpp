#include<stdio.h>
int main ()
{
	int arr[2][2];
	printf("\n Enter the values for 2D array");
	for (int i=0 ; i<2 ; i++)
	{
		for (int j=0 ; j<2 ; j++)
		{
			printf("\n arr[%d][%d]= ",i , j );
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n Original matrix:\n");
	for (int i=0 ; i<2 ; i++)
	{
		for (int j=0 ; j<2 ; j++)
		{
		printf ("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n Transpose of matrix:\n");
	for (int i=0 ; i<2 ; i++)
	{
		for (int j=0 ; j<2 ; j++)
		{
		printf ("%d\t",arr[j][i]);
		}
		printf("\n");
    }
    return 0;
}
