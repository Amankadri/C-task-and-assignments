#include<stdio.h>
int main()
{ 
  int arr[]={8,34,25,345,156,56};
  
  int i,max=arr[0];
  for(i=0;i<6;i++)
  {            
        if(arr[i]>max)
        { 
             max = arr[i];
		} 
		
  }   
  printf("%d",max);
}

