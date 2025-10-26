#include<stdio.h>
int main()
{
	int start=0, end=0;
	printf("\n Enter the starting number: ");
	scanf("%d",&start);
	printf("\n Enter the ending number: ");
	scanf("%d",&end);
	printf("\n Prime Numbers between %d and %d are:\n ", start , end);
	for (int i=start ; i<=end ; i++)
	{
		int prime=1;
		if(i<2)
		continue;
		for (int j=2 ; j<=i/2 ; j++)
		{
			if (i%j==0)
			{
				prime=0;
				break;
			}
		}
		if (prime)
		 printf("%d ", i);
	}
	return 0;
}
