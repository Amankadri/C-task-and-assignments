#include<stdio.h>
int main()
{
	int h=10,b=4,r=5,l=8,w=6;
	float p=3.14;
	char Ch;
	
	printf("Enter your choice...");
	scanf("%c",&Ch);
	
	
	switch(Ch)
	{
		case '1':
			printf("%d",(h*b)/2);
			break;
			
		case '2':
			printf("%f%d",p*(r*r));
			break;
			
		case '3':
			printf("%d",w*l);
			break;
			
	}
}
