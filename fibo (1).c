#include<stdio.h>
int main()

{ 

	int n1=1,n2=2,n3;
	
	printf("%d %d ",n1,n2); 
	int i;
	
	for( i=2;i<5;i++)
	{
			n3=n1+n2;
			
			n1=n2;
			n2=n3;
			printf("%d ",n3);
	}

	
	return 0;
}

