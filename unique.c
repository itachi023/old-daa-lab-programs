#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],n,flag;
    flag=0;
    printf("Number of terms in array is ");
    scanf("%d",&n);
    printf("\nEnter the array\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    flag=1;
                    break;
                }
            }
        }
    }
    if(flag==0)
        printf("\nArray is unique\n");
    else
        printf("\nArray is not unique\n");
    return 0;
}
