#include <stdio.h>
int main()
{
	int d,m,y;
	scanf("%d %d %d",&d,&m,&y);
	if(m>12)
	{
		printf("Invalid date");
	}
	else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
	{
		if(d>31)
		{
			printf("Invalid date");
		}
		else if(d==31 && m==12)
		{
			d=1;
			m=1;
			y+=1;
			printf("The next date is %d %d %d",d,m,y);
		}
		else if(d==31 && m!=12)
		{
			d=1;
			m+=1;
			printf("The next date is %d %d %d",d,m,y);
		}
		else
		{
			d+=1;
			printf("The next date is %d %d %d",d,m,y);
		}
	}
	else if(m==4 || m==6 || m==9 || m==11)
	{
		if(d>30)
		{
			printf("Invalid date");
		}
		else if(d==30)
		{
			d=1;
			m+=1;
			printf("The next date is %d %d %d",d,m,y);
		}
		else
		{
			d+=1;
			printf("The next date is %d %d %d",d,m,y);
		}
	}
	else if(m==2)
	{
		if((y%4==0 && y%100!=0) || y%400==0)
		{
			if(d>29)
			{
				printf("Invalid date");
			}
			else if(d==29)
			{
				d=1;
				m=3;
				printf("The next date is %d %d %d",d,m,y);
			}
			else
			{
				d+=1;
				printf("The next date is %d %d %d",d,m,y);
			}
		}
		else
		{
			if(d>28)
			{
				printf("Invalid date");
			}
			else if(d==28)
			{
				d=1;
				m=3;
				printf("The next date is %d %d %d",d,m,y);
			}
			else
			{
				d+=1;
				printf("The next date is %d %d %d",d,m,y);
			}
		}
	}
	return 0;
}

