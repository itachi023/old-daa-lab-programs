#include <stdio.h>
#include <stdlib.h>
#include<time.h>
void selection()
{

    int i,j,n,a[10],t,min;
    printf("Enter the array limit\n");
    scanf("%d",&n);
    printf("\nEnter the array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min=j;

        }
        t=a[i];
        a[i]=a[min];
        a[min]=t;
    }
    printf("\n\nThe sorted elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }

}
int main()
{
    clock_t start,stop;
    double tot;
    start=clock();
    selection();
    stop=clock();
    tot=(double)(stop-start)/CLOCKS_PER_SEC;
    printf("\nThe total time required is %f s\n",tot);
    return 0;
}
