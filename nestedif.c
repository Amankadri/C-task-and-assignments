#include<stdio.h>;
int main()
{
	int a=126,b=345,c=320;
	
	if(a>b)
	{
		if(a>c)
		{
		printf("%d", a);
		}
	    else
		{
			printf("%d", c);
		}	
	}
	else if(b>c)
	{
		printf("%d", b);	
	}
		
	else
	{
		printf("%d", c);
	}
}
