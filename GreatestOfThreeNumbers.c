#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("The greatest number is %d",a);
	}
	else if(b>a && b>c)
	{
		printf("The greatest number is %d",b);
	}
	else
	{
		printf("The greatest number if %d",c);
	}
	return 0;
}
