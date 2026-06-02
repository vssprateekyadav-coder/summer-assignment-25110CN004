#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of elements");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",A[i]);
    }

    return 0;
}