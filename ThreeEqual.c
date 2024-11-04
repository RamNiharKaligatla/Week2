#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c && a==c)
	{
		printf("Equal");
	}
	else
	{
		printf("Not equal");
	}
	return 0;
}
