#include<stdio.h>
int main()
{ 
 int phy, chem, bio, math, eng;
 float percentage, total;
 
 printf("Enter Physics marks : ");
 scanf("\n%d",&phy);
 printf("Enter Chemistry marks : ");
 scanf("\n%d",&chem);
 printf("Enter Biology marks : ");
 scanf("\n%d",&bio);
 printf("Enter Mathematics marks : ");
 scanf("\n%d",&math);
 printf("Enter English marks : ");
 scanf("\n%d",&eng);
 
 total= phy+chem+bio+math+eng;
 printf("Total marks = %.f", total);
 
 percentage= total/5;
 printf("\nPercentage = %.2f", percentage);
 
 if(percentage>75)
 {
 	printf("\nDistinction");
 }
 else if(percentage>60)
 {
 	printf("\nFirst Class");
 }
 else if(percentage>50)
 {
 	printf("\nSecond class");
 }
 else if(percentage>35)
 {
 	printf("\nThird class");
 }
else
 {
 	printf("\nFail");
 }
}
