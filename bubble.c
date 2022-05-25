#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
   clock_t start,stop;
   double tot;
   start=clock();
   int a[20];
   int n,temp;
   printf("Enter number of elements number\n");
   scanf("%d",&n);
   printf("\nEnter the array before sorting\n");
   for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
   for(int i=0;i<n-1;i++)
   {
       for(int j=0;j<n-i-1;j++)
       {
           if(a[j]>a[j+1])
           {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
       }
   }
   printf("\nEnter the array after sorting\n");
   for(int i=0;i<n;i++)
       printf("%d ",a[i]);
   stop=clock();
   tot=(double)(stop-start)/CLOCKS_PER_SEC;
   printf("\n\nThe total time required is %f s\n",tot);
}
