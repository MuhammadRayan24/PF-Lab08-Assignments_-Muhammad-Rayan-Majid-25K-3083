#include<stdio.h>
#include<string.h>
int main ()
{
	int mat1[2][2];
	int mat2[2][2];
    int result[2][2];
    printf ("\n Enter the elements for 1st (2x2) matrix: ");
    for (int i=0 ; i<2 ; i++)
    {
    	for (int j=0 ; j<2 ; j++)
    {
    	printf ("\n Matrix 1 [%d][%d] = ", i , j);
    	scanf ("%d",&mat1[i][j]);
	}
	}
	printf ("\n Enter the elements for 2nd (2x2) matrix: ");
    for (int i=0 ; i<2 ; i++)
    {
    	for (int j=0 ; j<2 ; j++)
    {
    	printf ("\n Matrix 2 [%d][%d] = ", i , j);
    	scanf ("%d",&mat2[i][j]);
	}
	}
	
	for (int i=0 ; i<2 ; i++)
    {
    	for (int j=0 ; j<2 ; j++)
    {
    	result[i][j]=mat1[i][j]+mat2[i][j];
	}
	}
     printf("\nResultant Matrix of matrix 1 and 2:\n");
    for(int i = 0; i < 2; i++) 
	{
        for(int j = 0; j < 2; j++) 
		{
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
	return 0;
}
