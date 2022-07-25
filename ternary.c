#include<stdio.h>;
int main()
{
	int x=1234, y=324, z=430;
	printf("%d",(x>y && x>z) ? x: (y>z) ? y:z);

}
