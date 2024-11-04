#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the points\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("Maximum is: %d",a);
	}
	else
	{
		if(b>c)
		{
			printf("Maximum is: %d",b);
		}
		else
		{
			printf("Maximum is: %d",c);
		}
	}
	return 0;
}
