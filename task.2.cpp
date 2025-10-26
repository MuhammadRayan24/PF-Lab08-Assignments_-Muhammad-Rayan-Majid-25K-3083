#include <stdio.h>
int main()
{
	int a , m;
	printf ("\n Enter the number for multiplication up to 10: ");
	scanf("%d",&a);
	printf("\n Multiplication table of %d", a);
	for (int i = 1 ; i<=10 ; i++)
	{
		m=i*a;
	printf ("\n %d x %d = %d ", a , i , m );
}
return 0;
}
