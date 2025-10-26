#include<stdio.h>

int main ()
{
	int arr[2][2][2];
	printf("\n Enter the elements for 2x2x2 3D array");
	for (int i=0 ; i<2 ; i++)
	{
		for (int j=0 ; j<2 ; j++)
		{
			for (int k=0 ; k<2 ; k++)
			{
				printf("\nArray[%d][%d][%d]= ", i ,j ,k);
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
	printf("\n Elements of 2x2x2 array:\n");
	for (int i=0 ; i<2 ; i++)
	{
		for (int j=0 ; j<2 ; j++)
		{
			for (int k=0 ; k<2 ; k++)
			{
				printf("%d\t",arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
