#include<stdio.h>
int main()
{ 
 int r;
 float pie,area;
 
 printf("enter radius : ");
 scanf("%d",&r);
 pie= 3.14;
 area = pie*(r*r);
 printf("Area of circle =%.2f", area);
}
