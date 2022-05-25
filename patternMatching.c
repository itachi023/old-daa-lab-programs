#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int BFStringMatching(char t[], char p[], int n, int m)
{
    int i, j;
    for (i = 0; i <= n - m; i++)
    {
        j = 0;
        while (j < m && t[i + j] == p[j])
        {
            j++;
        }
        if (j == m)
            return i;
    }
    return -1;
}
int main()
{
    char text[100], pattern[100];
    int n, m, pos;
    printf("Enter the text string: ");
    gets(text);
    printf("\nEnter the pattern string: ");
    gets(pattern);
    n = strlen(text);
    m = strlen(pattern);
    if (n < m)
    {
        printf("\n\nThe text string should be larger than the pattern string!!");
        exit(0);
    }
    clock_t start, end;
    double t;
    start = clock();
    pos = BFStringMatching(text, pattern, n, m);
    end = clock();
    t = (double)(end - start) / CLOCKS_PER_SEC;
    if (pos == -1)
        printf("\n\nPattern string not found in text string\n");
    else
        printf("\n\nPattern string found in text string at position %d\n", pos);
    printf("\n\nThe time taken= %f seconds", t);
    return 0;
}
