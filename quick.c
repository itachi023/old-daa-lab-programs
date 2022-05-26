#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int partition(int a[], int l, int r)
{
    int temp;
    int p = a[l];
    int i = l;
    int j = r + 1;
    do
    {
        do
        {
            i = i + 1;
        } while (a[i] < p && i <= r);
        do
        {
            j = j - 1;
        } while (a[j] > p && j >= 1);
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;

    } while (i < j);
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    temp = a[l];
    a[l] = a[j];
    a[j] = temp;
    return j;
}
void quickSort(int a[], int l, int r)
{
    int s;
    if (l < r)
    {
        s = partition(a, l, r);
        printf("partition position:\n");

        printf("l=%d,r=%d,s=%d\n", l, r, s);
        quickSort(a, l, s - 1);
        quickSort(a, s + 1, r);
    }
}

int main()
{
    int a[100], n;
    int i;
    clock_t start, end;
    double t;
    printf("enter the size of the array:");
    scanf("%d", &n);
    printf("enter the array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    start = clock();
    quickSort(a, 0, n - 1);
    end = clock();
    t = (double)(end - start) / CLOCKS_PER_SEC;
    printf("The sorted array is:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    printf("\nThe time taken=%f seconds\n", t);
    return 0;
}