#include<stdio.h>
int main()
{
 int a;
 printf("Enter value of a : ");
 scanf("%d", &a);
 if(a>0)
 {
 	printf("+ve number");
 }
 else if(a==0)
 {
 	printf("Zero");
 }
 else 
 {
 	printf("-ve number");
 }	
}
