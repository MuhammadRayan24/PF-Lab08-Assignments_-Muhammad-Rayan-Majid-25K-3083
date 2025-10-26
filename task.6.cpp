#include<stdio.h>
int main ()
{
	int arr[3][3];
	int i , j , saddleFound=0;
	printf("\n Enter the elements for 3x3 matrix: ");
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			printf("\n arr[%d][%d]",i ,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n The given matrix is:\n");
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	for(i = 0; i < 3; i++) 
	{
        int rowMin = arr[i][0];
        int colIndex = 0;
        for(j = 1; j < 3; j++) 
		{
            if(arr[i][j] < rowMin) 
			{
                rowMin = arr[i][j];
                colIndex = j;
            }
        }

        int isSaddle = 1;
        for(int k = 0; k < 3; k++) {
            if(arr[k][colIndex] > rowMin) {
                isSaddle = 0;
                break;
            }
        }

        
        if(isSaddle) 
		{
            printf("\nSaddle point found at position [%d][%d] = %d\n", i, colIndex, rowMin);
            saddleFound = 1;
        }
    }

    if(!saddleFound)
        printf("\nNo saddle point found in the matrix.\n");

    return 0;
}
