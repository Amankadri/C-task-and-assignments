#include<stdio.h>
int main()
{
	int row,col,num=1;
	
	for(row=10;row>=1;row--) 
	{
		for(col=1;col<=row;col++) 
		{
		printf("$");							   								 							 
							 
 		}
 		
 		for(col=row;col<=10;col++) 
		{
			printf("");							   								 							 
							 
 		}
		printf("\n");
	}
}
