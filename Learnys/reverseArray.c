#include <stdio.h>

int main()
{
    int i, arr[10], n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=n-1; i<=0;i--)
    {
        printf("%d", arr[i]);
    }

}
