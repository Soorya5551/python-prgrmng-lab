#include<stdio.h>
void main()
  { 
     int n,i,s=0;
     printf("Enter the limit:");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
       {
      s=s+i;
        }
     printf("The sum is %d",s);  
   }    
