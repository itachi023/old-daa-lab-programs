#include <stdio.h>
#include <stdlib.h>
#include<time.h>
clock_t start,end;
void insertion(int a[20],int n,int v)
{

    int i,j;
    for(i=1;i<n;i++)
    {
        v=a[i];
        j=i-1;
        while(j>=0 && a[j]>v)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=v;
    }
}
int main()
{
    int a[20],n,i,v;
    double t;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    start=clock();
    insertion(a,n,v);
    end=clock();
    printf("Sorted Element:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    t=(double)(end-start)/CLOCKS_PER_SEC;
    printf("\n Execution time required in seconds: %f",t);
    return 0;
}
